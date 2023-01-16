#pragma once
#ifndef _BAND_H_
#define _BAND_H_

#include "Album.h"

class Band
{
public:
	Band();
	Band(Album* albums, std::string name, std::string description, const int albumCount);

	~Band();

	void SetAlbums(Album* albums);
	void SetName(std::string name);
	void SetDescription(std::string description);
	void SetAlbumCount(const int albumCount);

	Album* GetAlbums();
	std::string GetName();
	std::string GetDescription();
	int GetAlbumCount();

	Song* FindSong(std::string songTitle);
	Song* GetAllSongs(int& allSongCount);
	Album* FindAlbum(Song* song, int& numberSong);
	Song* GetAllGenreSongs(Genre findingGenre, int& allSongsCount);
private:
	std::string _name = "";
	std::string _description = "";
	Album* _albums = nullptr;
	int _albumCount = 0;
};
void DemoBand();



#endif // !_BAND_H_

