#include "Song.h"


Song::Song()
{
	this->_title = "";
	this->_genreType = Genre::BLUES; //Как задать параметр по умолчанию в enum
	this->_duration = 0;
}

Song::Song(std::string title, Genre genreType, const double duration)
{
	this->_title = title;
	this->_genreType = genreType;
	this->_duration = duration;
}


void Song::SetTitle(std::string title)
{
	this->_title = title;
}

void Song::SetGenreType(Genre genreType)
{
	this->_genreType = genreType;
}

void Song::SetDuration(const double duration)
{
	if (duration <= 0)
	{
		throw std::exception("\nThe duration cant be less or equal to 0, please enter values again\n");
	}
	this->_duration = duration;
}


std::string Song::GetTitle()
{
	return _title;
}

Genre& Song::GetGenre()
{
	return _genreType;
}

double Song::GetDuration()
{
	return _duration;
}


void WriteGenre(Genre genre)
{
	switch (genre)
	{
		case Genre::POP:
		{
			std::cout << "pop, ";
			break;
		}
		case Genre::FONK:
		{
			std::cout << "fonk, ";
			break;
		}
		case Genre::RAP:
		{
			std::cout << "rap, ";
			break;
		}
		case Genre::ROCK:
		{
			std::cout << "rock, ";
			break;
		}
		case Genre::JAZZ:
		{
			std::cout << "jazz, ";
			break;
		}
		case Genre::BLUES:
		{
			std::cout << "blues, ";
			break;
		}
		case Genre::COUNTRY:
		{
			std::cout << "country, ";
			break;
		}
		case Genre::DUBSTEP:
		{
			std::cout << "dubstep, ";
			break;
		}
		default:
		{
			std::cout << "unknow genre, " << std::endl;
			break;
		}
	}
}
