#include "Route.h"
#include <iostream>
#include <exception>

using namespace std;

void DemoRoute()
{
	/*const int COUNT = 3;
	Route route[COUNT];

	for (int i = 0; i < COUNT; i++)
	{
		cout << "#" << i + 1;
		ReadRouteFromConsole(route[i]);
	}
	system("cls");
	for (int i = 0; i < COUNT; i++)
	{
		cout << "#" << i + 1 << " ";
		WriteRouteFromConsole(route[i]);
	}*/

	const int AMOUNT = 3;
	string stopName = "";
	Route routes[AMOUNT];

	cout << endl;

	for (int i = 0; i < AMOUNT; i++)
	{
		cout << "#" << i + 1;
		ReadRouteFromConsole(routes[i]);
	}
	system("cls");
	cout << "Enter the stop name ";
	cin >> stopName;
	for (int i = 0; i < AMOUNT; i++)
	{
		cout << "#" << i + 1 << " ";
		WriteRouteFromConsole(routes[i]);
	}

	int check = FindRouteTo(routes, AMOUNT, stopName);
	if (check != -1)
	{
		cout << "--------------Founded route--------------" << endl;
		WriteRouteFromConsole(routes[check]);
	}
	else
	{
		cout << "Route not founded" << endl;
	}


}

void ReadRouteFromConsole(Route& route)
{
	int number = 0, repetitionRateMinute = 0, averageDurationMinute = 0, stopCount = 0;

	cout << "\nEnter the bus number: ";
	cin >> number;
	cout << "\nEnter the repetition rate of routes: ";
	cin >> repetitionRateMinute;
	cout << "\nEnter the average time of the route: ";
	cin >> averageDurationMinute;
	cout << "\nEnter the number of stops: ";
	cin >> stopCount;

	route.SetNumber(number);
	route.SetRepetitionRateMinute(repetitionRateMinute);
	route.SetAverageDurationMinute(averageDurationMinute);
	route.SetStopCount(stopCount);

	IsCorrect(route);

	std::string* stopNames = new string[route.GetStopCount()];

	for (int i = 0; i < route.GetStopCount(); i++)
	{
		cout << "\nEnter the name of the stop №" << (i + 1) << " ";
		cin >> stopNames[i];
	}
	route.SetStopNames(stopNames);

	/*delete[]stopNames;
	stopNames = nullptr; Почему если мы удаляем, то программа крашится, удаляется и внутренний stopNames в book тоже самое*/ 
}

void WriteRouteFromConsole(Route& route)
{
	for (int i = 0; i < (route.GetStopCount() - 1); i++)
	{
		cout << route.GetStopNames()[i] << ", ";
	}
	cout << route.GetStopNames()[route.GetStopCount() - 1] << ". ";
	cout << route.GetNumber() << " ";
	cout << route.GetAverageDurationMinute() << "min ";
	cout << route.GetRepetitionRateMinute() << "min " << endl;
}

int FindRouteTo(Route* route, const int stopCount, std::string stopName)
{
	for (int i = 0; i < stopCount; i++)
	{
		for (int j = 0; j < route[j].GetStopCount(); j++) //Работает ли
		{
			if (route[i].GetStopNames()[j] == stopName)
			{
				return i;
			}
		}

	}
	return -1;
}

void IsCorrect(Route& route)
{
	if (route.GetAverageDurationMinute() <= 0 || route.GetAverageDurationMinute() > 8640)
	{
		throw exception("\nThe average duration cant be less than 0 and more than 8640, please enter values again\n");
	}
	if (route.GetNumber() < 0)
	{
		throw exception("\nThe number cant be less than 0, please enter values again\n");
	}
	if (route.GetRepetitionRateMinute() <= 0 || route.GetRepetitionRateMinute() > 8640)
	{
		throw exception("\nThe repetition rate cant be less than 0 and more than 8640, please enter values again\n");
	}
	if (route.GetStopCount() <= 0)
	{
		throw exception("\nThe number of stops cant be less or equal to 0, please enter values again\n");
	}
}

void Route::SetNumber(const int number)
{
	if (number < 0)
	{
		throw exception("\nThe number cant be less than 0, please enter values again\n");
	}
	this->_number = number;
}

void Route::SetAverageDurationMinute(const int averageDurationMinute)
{
	if (averageDurationMinute <= 0 || averageDurationMinute > 8640)
	{
		throw exception("\nThe average duration cant be less than 0 and more than 8640, please enter values again\n");
	}
	this->_averageDurationMinute = averageDurationMinute;
}

void Route::SetRepetitionRateMinute(const int repetitionRateMinute)
{
	if (repetitionRateMinute <= 0 || repetitionRateMinute > 8640)
	{
		throw exception("\nThe repetition rate cant be less than 0 and more than 8640, please enter values again\n");
	}
	this->_repetitionRateMinute = repetitionRateMinute;
}

void Route::SetStopCount(const int stopCount)
{
	if (stopCount <= 0)
	{
		throw exception("\nThe number of stops cant be less or equal to 0, please enter values again\n");
	}
	this->_stopCount = stopCount;
}

void Route::SetStopNames(std::string* stopNames)
{
	this->_stopNames = stopNames;
}

int Route::GetNumber()
{
	return this->_number;
}

int Route::GetAverageDurationMinute()
{
	return this->_averageDurationMinute;
}

int Route::GetRepetitionRateMinute()
{
	return this->_repetitionRateMinute;
}

int Route::GetStopCount()
{
	return this->_stopCount;
}

std::string* Route::GetStopNames()
{
	return this->_stopNames;
}
