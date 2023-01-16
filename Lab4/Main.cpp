#include <iostream>

#include "GeometricProgram.h"

using namespace std;


int EnterValue();

int main()
{
	setlocale(LC_ALL, "Rus");
	GeometricProgram geometricProgram;

	while (true)
	{
		system("cls");
		cout << "1. Demo ring" << endl;
		cout << "2. Demo rectangle" << endl;
		cout << "3. Demo collision" << endl;
		cout << "0. ========EXIT========" << endl;
		int choice = EnterValue();
		switch (choice)
		{
			case 1:
			{
				system("cls");
				try
				{
					geometricProgram.DemoRing();
				}
				catch (const std::exception& ex)
				{
					cout << ex.what() << endl;
				}
				break;
			}
			case 2:
			{
				system("cls");
				try
				{
					geometricProgram.DemoRectangleWithPoint();
				}
				catch (const std::exception& ex)
				{
					cout << ex.what() << endl;
				}
				break;
			}
			case 3:
			{
				system("cls");
				try
				{
					geometricProgram.DemoCollision();
				}
				catch (const std::exception& ex)
				{
					cout << ex.what() << endl;
				}
				break;
			}
			case 0:
			{
				system("cls");
				return 0;
				break;
			}
			default:
			{
				cout << "Invalid value" << endl;
				break;
			}
		}
		system("pause");
	}
	return 0;
}

int EnterValue()
{
	while (true)
	{
		int value;
		cin >> value;

		if (!cin.fail())
		{
			cin.ignore(32767, '\n');
			return value;
		}
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Invalid value please try again" << endl;
	}
}
