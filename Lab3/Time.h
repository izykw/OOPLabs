#pragma once
#ifndef _TIME_H_
#define _TIME_H_

class Time
{
public:
	Time();
	Time(const int year, const int month, const int day, const int hour, const int minute);

	void SetYear(const int year);
	void SetMonth(const int month);
	void SetDay(const int day);
	void SetHour(const int hour);
	void SetMinute(const int minute);

	int GetYear();
	int GetMonth();
	int GetDay();
	int GetHour();
	int GetMinute();
private:

	int _year = 0;
	int _month = 0;
	int _day = 0;
	int _hour = 0;
	int _minute = 0;
};

void IsCorrect(const int year, const int month, const int day, const int hour, const int minute);

#endif // !_TIME_H_

