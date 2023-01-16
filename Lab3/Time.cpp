#include "Time.h"
#include <iostream>


Time::Time()
{
	this->_year = 0;
	this->_month = 0;
	this->_day = 0;
	this->_hour = 0;
	this->_minute = 0;;
}

Time::Time(const int year, const int month, const int day, const int hour, const int minute)
{
	IsCorrect(year, month, day, hour, minute);

	this->_year = year;
	this->_month = month;
	this->_day = day;
	this->_hour = hour;
	this->_minute = minute;;
}


void Time::SetYear(const int year)
{
	if (year < 0 || year > 2021)
	{
		throw std::exception("\nYear cant be less 0 and more than 2021, please enter values again\n");
	}
	this->_year = year;
}

void Time::SetMonth(const int month)
{
	if (month < 0 || month > 12)
	{
		throw std::exception("\nMonth cant be less 0 and more than 12, please enter values again\n");
	}
	this->_month = month;
}

void Time::SetDay(const int day)
{
	if (day < 0 || day > 30)
	{
		throw std::exception("\nDay cant be less 0 and more than 30, please enter values again\n");
	}
	this->_day = day;
}

void Time::SetHour(const int hour)
{
	if (hour < 0 || hour > 24)
	{
		throw std::exception("\nHours cant be less 0 and more than 24, please enter values again\n");
	}
	this->_hour = hour;
}

void Time::SetMinute(const int minute)
{
	if (minute < 0 || minute > 60)
	{
		throw std::exception("\nMinutes cant be less 0 and more than 60, please enter values again\n");
	}
	this->_minute = minute;
}


int Time::GetYear()
{
	return _year;
}

int Time::GetMonth()
{
	return _month;
}

int Time::GetDay()
{
	return _day;
}

int Time::GetHour()
{
	return _hour;
}

int Time::GetMinute()
{
	return _minute;
}


void IsCorrect(const int year, const int month, const int day, const int hour, const int minute)
{
	if (year < 0 || year > 2021)
	{
		throw std::exception("\nYear cant be less 0 and more than 2021, please enter values again\n");
	}
	if (month < 0 || month > 12)
	{
		throw std::exception("\nMonth cant be less 0 and more than 12, please enter values again\n");
	}
	if (day < 0 || day > 30)
	{
		throw std::exception("\nDay cant be less 0 and more than 30, please enter values again\n");
	}
	if (hour < 0 || hour > 24)
	{
		throw std::exception("\nHours cant be less 0 and more than 24, please enter values again\n");
	}
	if (minute < 0 || minute > 60)
	{
		throw std::exception("\nMinutes cant be less 0 and more than 60, please enter values again\n");
	}

}
