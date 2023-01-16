#pragma once
#ifndef _ALBUM_H_
#define _ALBUM_H_

#include "Song.h"

class Album
{
public:
	Album();
	Album(Song* songs, std::string title, const int yearIssue, const int songCount);
	~Album();

	void SetTitle(std::string title);
	void SetSongs(Song* songs);
	void SetYearIssue(const int yearIssue);
	void SetSongCount(const int songCount);

	Song* GetSong();
	std::string GetTitle();
	int GetYearIssue();
	int GetSongCount();
private:
	std::string _title = "";
	int _yearIssue = 0;
	Song* _songs = nullptr;
	int _songCount = 0;

};
#endif // !_ALBUM_H_

