#pragma once
#ifndef _SONG_H_
#define _SONG_H_

#include <iostream>
#include <string>

enum class Genre
{
	POP,
	FONK,
	RAP,
	ROCK,
	JAZZ,
	BLUES,
	COUNTRY,
	DUBSTEP
};

class Song
{
public:
	Song();
	Song(std::string title, Genre genreType, const double duration);

	void SetTitle(std::string title);
	void SetGenreType(Genre genreType);
	void SetDuration(const double duration);

	std::string GetTitle();
	Genre& GetGenre();
	double GetDuration();
private:
	std::string _title = "";
	double _duration = 0;
	Genre _genreType; //Серьезность	Код	Описание	Проект	Файл	Строка	Состояние подавления: Предупреждение C26495	Переменная "Song::GenreType" не инициализирована.Всегда инициализируйте переменную.
};

void WriteGenre(Genre genre);

#endif // !_SONG_H_


