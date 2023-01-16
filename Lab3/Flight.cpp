#include "Flight.h"
#include <iostream>


Flight::Flight()
{
	this->_departurePoint = "";
	this->_arrivalPoint = "";
	this->_number = 0;
	this->_departureTime.SetHour(0);
	this->_departureTime.SetMinute(0);
	this->_arrivalTime.SetHour(0);
	this->_arrivalTime.SetMinute(0);
}

Flight::Flight(Time& departureTime, Time& arrivalTime, std::string departurePoint, std::string arrivalPoint, const int number)
{
	this->_departurePoint = departurePoint;
	this->_arrivalPoint = arrivalPoint;
	this->_number = number;
	this->_departureTime.SetHour(departureTime.GetHour());
	this->_departureTime.SetMinute(departureTime.GetMinute());
	this->_arrivalTime.SetHour(arrivalTime.GetHour());
	this->_arrivalTime.SetMinute(arrivalTime.GetMinute());
}


void Flight::SetNumber(const int number)
{
	if (number < 0)
	{
		throw std::exception("\nThe number cant be less then 0, please enter values again\n");
	}
	this->_number = number;
}

void Flight::SetDepartureTime(Time& departureTime)
{
	this->_departureTime = departureTime;
}

void Flight::SetArrivalTime(Time& arrivalTime)
{
	this->_arrivalTime = arrivalTime;
}

void Flight::SetDeparturePoint(std::string departurePoint)
{
	this->_departurePoint = departurePoint;
}

void Flight::SetArrivalPoint(std::string arrivalPoint)
{
	this->_arrivalPoint = arrivalPoint;
}


Time& Flight::GetDepartureTime()
{
	return _departureTime;
}

Time& Flight::GetArrivalTime()
{
	return _arrivalTime;
}

std::string& Flight::GetDeparturePoint()
{
	return _departurePoint;
}

std::string& Flight::GetArrivalPoint()
{
	return _arrivalPoint;
}

int Flight::GetNumber()
{
	return _number;
}

int Flight::GetFlightTimeMinutes()
{
	if (this->GetArrivalTime().GetHour() <= this->GetDepartureTime().GetHour())
	{
		return ((24 - (this->GetDepartureTime().GetHour() - this->GetArrivalTime().GetHour())) *
			60 + this->GetArrivalTime().GetMinute() - this->GetDepartureTime().GetMinute());
	}
	else
	{
		return ((this->GetArrivalTime().GetHour() * 60 + this->GetArrivalTime().GetMinute()) -
			(this->GetDepartureTime().GetHour() * 60 + this->GetDepartureTime().GetMinute()));
	}
}


void DemoFlight()
{
	const int SIZE = 5;
	Flight flights[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		Time arrivalTime(2020, (i+1), (i+2),(i+7),(i*5+10));
		Time departureTime(2020, (i + 1), (i + 3), (i + 9), (i * 3 + 12));
		flights[i].SetNumber(i + 5);
		flights[i].SetDeparturePoint("Tomsk");
		flights[i].SetArrivalPoint("Canada");
		flights[i].SetDepartureTime(arrivalTime);
		flights[i].SetArrivalTime(departureTime);
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "S" << flights[i].GetNumber() << " " << flights[i].GetDeparturePoint() << " - " << flights[i].GetArrivalPoint() << " departure 0"
			<< flights[i].GetArrivalTime().GetMonth()  << ".0" << flights[i].GetArrivalTime().GetDay() << " " << flights[i].GetArrivalTime().GetHour() << ":"
			<< flights[i].GetArrivalTime().GetMinute() << " Arrival 0" << flights[i].GetArrivalTime().GetMonth() << ".0"
			<< flights[i].GetDepartureTime().GetDay() << " " << flights[i].GetDepartureTime().GetHour() << ":" << flights[i].GetDepartureTime().GetMinute() << std::endl;
	}
	
	Time departureTime(2020, 10, 2, 16, 22);
	Time arrivalTime(2020, 10, 2, 8, 14);
	Flight flight(departureTime, arrivalTime, "Tomsk", "Canada", 8);
	int result = flight.GetFlightTimeMinutes();
	std::cout << "S" << flight.GetNumber() << " " << flight.GetDeparturePoint() << " - " << flight.GetArrivalPoint() << " flight time: " <<
			(result / 60) << "h " << (result % 60) << "min" << std::endl;
}