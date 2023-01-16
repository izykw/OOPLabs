#include "Album.h"


Album::Album()
{
	this->_songs = nullptr;
	this->_title = "";
	this->_yearIssue = 0;
	this->_songCount = 0;
}

Album::Album(Song* songs, std::string title, const int yearIssue, const int songCount)
{
	this->_songs = songs;
	this->_title = title;
	this->_yearIssue = yearIssue;
	this->_songCount = songCount;
}


Album::~Album()
{
	/*if (_songs != nullptr)
	{
		delete _songs;
		_songs = nullptr;
	}*/
}


void Album::SetTitle(std::string title)
{
	this->_title = title;
}

void Album::SetSongs(Song* songs)
{
	this->_songs = songs;
}

void Album::SetYearIssue(const int yearIssue)
{
	if (yearIssue > 2020 || yearIssue <= 0)
	{
		throw std::exception("\nThe publication year cant be less or equal to 0 and more than this year, please enter values again\n");
	}
	this->_yearIssue = yearIssue;
}

void Album::SetSongCount(const int songCount)
{
	if (songCount < 0)
	{
		throw std::exception("\nThe song count cant be less then 0, please enter values again\n");
	}
	this->_songCount = songCount;
}


Song* Album::GetSong()
{
	return _songs;
}

std::string Album::GetTitle()
{
	return _title;
}

int Album::GetYearIssue()
{
	return _yearIssue;
}

int Album::GetSongCount()
{
	return _songCount;
}
