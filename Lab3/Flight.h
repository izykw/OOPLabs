#pragma once
#ifndef _FLIGHT_H_
#define _FLIGHT_H_

#include <string>
#include "Time.h"

class Flight
{
public:
	Flight();
	Flight(Time& departureTime, Time& arrivalTime, std::string departurePoint, std::string arrivalPoint, const int number);

	void SetNumber(const int number);
	void SetDepartureTime(Time& departureTime);
	void SetArrivalTime(Time& arrivalTime);
	void SetDeparturePoint(std::string departurePoint);
	void SetArrivalPoint(std::string arrivalPoint);

	Time& GetDepartureTime();
	Time& GetArrivalTime();
	std::string& GetDeparturePoint();
	std::string& GetArrivalPoint();
	int GetNumber();

	int GetFlightTimeMinutes();
private:
	int _number = 0;
	Time _departureTime;
	Time _arrivalTime;
	std::string _departurePoint = "";
	std::string _arrivalPoint = "";
};

void DemoFlight();

#endif // !_FLIGHT_H_

