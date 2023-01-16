#include "Menu.h"

void Menu()
{
	int choice = 0;
	while (true)
	{
		cout << endl;
		system("pause");
		system("cls");
		cout << "1. Demo Book" << endl;
		cout << "2. Demo Route" << endl;
		cout << "3. Demo Rectangle(with point)" << endl;
		cout << "4. Demo Flight(with time)" << endl;
		cout << "5. Demo Band(with song and album)" << endl;
		cout << "++++++++ 0.Exit ++++++++" << endl;
		choice = EnterValue();

		switch (choice)
		{
			case 1:
			{
				system("cls");
				try
				{
					DemoBook();
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
					DemoRoute();
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
					DemoRectangleWithPoint();
				}
				catch (const std::exception& ex)
				{
					cout << ex.what() << endl;
				}
				break;
			}
			case 4:
			{
				system("cls");
				try
				{
					DemoFlight();
				}
				catch (const std::exception& ex)
				{
					cout << ex.what() << endl;
				}
				break;
			}
			case 5:
			{
				system("cls");
				try
				{
					DemoBand();
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
				return;
			}
			default:
			{
				cout << "Invalid value" << endl;
				break;
			}
		}
	}
}

int EnterValue()
{
	while (true)
	{
		int value;
		cin >> value;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Invalid value please try again" << endl;
		}
		else
		{
			cin.ignore(32767, '\n');
			return value;
		}
	}
}
