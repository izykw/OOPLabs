#pragma once

#ifndef _ROUTE_H_
#define _ROUTE_H_

#include <string>

class Route
{
public:
	void SetNumber(const int number);
	void SetAverageDurationMinute(const int averageDurationMinute);
	void SetRepetitionRateMinute(const int repetitionRateMinute);
	void SetStopCount(const int stopCount);
	void SetStopNames(std::string* stopNames);

	int GetNumber();
	int GetAverageDurationMinute();
	int GetRepetitionRateMinute();
	int GetStopCount();
	std::string* GetStopNames();
private:
	int _number = 0;
	int _averageDurationMinute = 0;
	int _repetitionRateMinute = 0;
	int _stopCount = 0;
	std::string* _stopNames = nullptr; //TODO: Будет ли работать. string sN[10].
};

void DemoRoute();
void ReadRouteFromConsole(Route& route);
void WriteRouteFromConsole(Route& route);
int FindRouteTo(Route* route, const int stopCount, std::string stopName);
void IsCorrect(Route& route);


#endif // !_ROUTE_H_

