#include "Band.h"

using namespace std;

Band::Band()
{
	this->_albums = nullptr;
	this->_name = "";
	this->_description = "";
	this->_albumCount = 0;
}

Band::Band(Album* albums, std::string name, std::string description, const int albumCount)
{
	this->_albums = albums;
	this->_name = name;
	this->_description = description;
	this->_albumCount = albumCount;
}

Band::~Band()
{
	/*if (_albums != nullptr)
	{
		delete _albums;
		_albums = nullptr;
	}*/
}


void Band::SetAlbums(Album* albums)
{
	this->_albums = albums;
}

void Band::SetName(std::string name)
{
	this->_name = name;
}

void Band::SetDescription(std::string description)
{
	this->_description = description;
}

void Band::SetAlbumCount(const int albumCount)
{
	if (albumCount < 0)
	{
		throw std::exception("\nThe song count cant be less then 0, please enter values again\n");
	}
	this->_albumCount = albumCount;
}


Album* Band::GetAlbums()
{
	return _albums;
}

std::string Band::GetName()
{
	return _name;
}

std::string Band::GetDescription()
{
	return _description;
}

int Band::GetAlbumCount()
{
	return _albumCount;
}

Song* Band::FindSong(std::string songTitle)
{
	for (int i = 0; i < this->GetAlbumCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i].GetSongCount(); j++)
		{
			if (this->GetAlbums()[i].GetSong()[j].GetTitle() == songTitle)
			{
				return &this->GetAlbums()[i].GetSong()[j];
			}
		}
	}
	return nullptr;
}

Song* Band::GetAllSongs(int& allSongCount)
{
	for (int i = 0; i < this->GetAlbumCount(); i++)
	{
		allSongCount += this->GetAlbums()[i].GetSongCount();
	}

	if (!allSongCount)
	{
		return nullptr;
	}

	Song* songs = new Song[allSongCount];
	int value = 0;

	for (int i = 0; i < this->GetAlbumCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i].GetSongCount(); j++)
		{
			songs[value] = this->GetAlbums()[i].GetSong()[j]; //Серьезность	Код	Описание	Проект	Файл	Строка	Состояние подавления Предупреждение	
															  //C6385	Чтение недопустимых данных из "songs":  доступный для чтения объем равен "(unsigned int)*48+4" байт, однако считать можно только "96" байт.lab3/
			value++;
		}
	}

	return songs;
}

Album* Band::FindAlbum(Song* song, int& numberSong)
{
	for (int i = 0; i < this->GetAlbumCount(); i++)
	{
		for (int j = 0; j < this->GetAlbums()[i].GetSongCount(); j++)
		{
			if (this->GetAlbums()[i].GetSong()[j].GetDuration() == song->GetDuration() &&
				this->GetAlbums()[i].GetSong()[j].GetGenre() == song->GetGenre() &&
				this->GetAlbums()[i].GetSong()[j].GetTitle() == song->GetTitle())
			{
				numberSong = j;
				return &this->GetAlbums()[i];
			}
		}
	}
	return nullptr;
}

Song* Band::GetAllGenreSongs(Genre findingGenre, int& allSongsCount)
{
	Song* allSongs = this->GetAllSongs(allSongsCount);
	int neededGenry = 0, count = 0;

	for (int i = 0; i < allSongsCount; i++)
	{
		if (allSongs[i].GetGenre() == findingGenre)
		{
			neededGenry++;
		}
	}

	if (!neededGenry)
	{
		return nullptr;
	}

	Song* allGenreSong = new Song[neededGenry];
	for (int i = 0; i < allSongsCount; i++)
	{
		if (allSongs[i].GetGenre() == findingGenre)
		{
			allGenreSong[count] = allSongs[i];
			count++;
		}
	}
	allSongsCount = count;
	return allGenreSong;
}

void DemoBand()
{
	const int songCount = 5;
	const int albumCount = 3;

	Song firstSongs[songCount]
	{
		Song("Monetka",Genre::COUNTRY, 2.0),
		Song("Toss a Coin to Your Witcher",Genre::JAZZ, 2.8),
		Song("Toxin",Genre::POP, 3.1),
		Song("Hate me",Genre::RAP, 4.4),
	};
	Song secondSongs[songCount]
	{
		Song("Dead eyes",Genre::POP, 2.6),
		Song("Hot girl bummer",Genre::POP, 2.0),
		Song("Fendi",Genre::RAP, 2.26),
		Song("Love is",Genre::RAP, 2.07),
	};
	Song thirdSongs[songCount]
	{
		Song("Me and my broken heart",Genre::POP, 1.25),
		Song("School",Genre::FONK, 1.59),
		Song("Imbossible",Genre::ROCK, 1.33),
		Song("Broken",Genre::DUBSTEP, 1.11),
	};
	Album albums[albumCount]
	{
		Album(firstSongs,"I'm a king", 2015, 4),
		Album(secondSongs,"Legends never die", 2001, 4),
		Album(thirdSongs,"Pink phloyd", 2020, 4),
	};
	Band band(albums, "Juice WRLD", "Legends never die", albumCount);


	cout << "\n-------------Find song-------------\n";
	Song* foundSong = band.FindSong("School");
	if (foundSong)
	{
		cout << "Need song name: " << foundSong->GetTitle() << " duration " << foundSong->GetDuration() << " genre "; 
		WriteGenre(foundSong->GetGenre());
		cout << endl << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}


	cout << "\n-------------Find album-------------\n";
	int numberSong = 0;
	Album* foundAlbum = band.FindAlbum(&secondSongs[2], numberSong);
	if (foundAlbum)
	{
		cout << "Album name: " << foundAlbum->GetTitle() << " year issue " << foundAlbum->GetYearIssue() << endl;
		cout << "Need song name: " << foundAlbum->GetSong()[numberSong].GetTitle() << " duration " << foundAlbum->GetSong()[numberSong].GetDuration()
			<< " genre "; 
		WriteGenre(foundAlbum->GetSong()[numberSong].GetGenre());
		cout << endl << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}

	cout << "\n-------------Get all songs-------------\n";
	int allSongCount = 0;
	Song* allSong = band.GetAllSongs(allSongCount);
	if (allSong)
	{
		for (int i = 0; i < allSongCount; i++)
		{
			cout << "#" << i + 1 << " " << allSong[i].GetTitle() << " duration " << allSong[i].GetDuration() << " genre ";
			WriteGenre(allSong[i].GetGenre());
			cout << endl;
		}
	}
	else
	{
		cout << "Not found" << endl;
	}

	int allGenrySongCount = 0;
	cout << "\n-------------Get all genre songs-------------\n";
	Song* allGenreSong = band.GetAllGenreSongs(Genre::POP, allGenrySongCount);
	if (allGenreSong)
	{
		for (int i = 0; i < allGenrySongCount; i++)
		{
			cout << "#" << i + 1 << " " << allGenreSong[i].GetTitle() << " duration " << allGenreSong[i].GetDuration() << " genre ";
			WriteGenre(allGenreSong[i].GetGenre());
			cout << endl;
		}
	}
	else
	{
		cout << "Not found" << endl;
	}

}

