#include <iostream>

#include "Person.h"
#include "Student.h"
#include "Teacher.h"

#include "User.h"
#include "PaidUser.h"
#include "Post.h"
#include "CheckLogin.h"

#include "DiscountBase.h"
#include "PercentDiscount.h"
#include "CertificateDiscount.h"

#include "ShowClass.h"

using namespace std;

int EnterValue();

int main()
{
	while (true)
	{
		system("cls");
		cout << "1.Inheritance" << endl;
		cout << "2.Refactoring" << endl;
		cout << "3.Polymorphism" << endl;
		cout << "0.Exit" << endl;
		int choice = EnterValue();

		switch (choice)
		{
			case 1:
			{
				system("cls");
				try
				{
					Person* person = new Person("Oleg", "Taokita", "Romanovich");
					Student* student = new Student("Maksim", "Hito", "Vladimirovich", 777, 2019);
					Teacher* teacher = new Teacher("Kochergin", "Maksim", "Igorevich", "Professor");

					ShowClass::ShowPerson(person);
					ShowClass::ShowPerson(student);
					ShowClass::ShowPerson(teacher);

					delete person;
					delete student;
					delete teacher;
					person = nullptr;
					student = nullptr;
					teacher = nullptr;
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
					User* user = new PaidUser("TheKnyazz", "JHPzPGFG", 200000);
					User** users = new User*[]
					{
						new User("morkovka1995", "1995morkovka", 100000),
						new User("ilon_mask", "X æ A-12", 100001),
						new User("megazver", "password", 100002),
						new User("yogurt", "ksTPQzSu", 100003),
					};

					User** paidUsers = new User*[]
					{
						new PaidUser("TheKnyazz", "JHPzPGFG", 200000),
						new PaidUser("system_exe", "UgfkDGmU", 200001),
						new PaidUser("RazorQ", "TBgRnbCP", 200002),
						new PaidUser("schdub", "CetyQVID", 200003),
					};

					int size = 8;
					User** users2 = new User*[size];
					for (int i = 0; i < (size / 2); i++)
					{
						users2[i] = users[i];
					}
					for (int i = (size / 2); i < (size / 2); i++)
					{
						users2[i] = paidUsers[i];
					}

					string login = "megazver";
					string password = "password";
					User* loginedUser = CheckLogin::Login(users, login, password, 4);
					if (loginedUser)
					{
						cout << "Signed in as: " << loginedUser->GetLogin() << endl;
					}
					else
					{
						cout << "Signed in as: UNKNOW " << endl;
					}

					login = "system_exe";
					password = "UgfkDGmU";
					User* loginedPaidUser = CheckLogin::Login(paidUsers, login, password, 4);
					if (loginedPaidUser)
					{
						cout << "Signed in as: " << loginedPaidUser->GetLogin() << endl;
					}
					else
					{
						cout << "Signed in as: UNKNOW " << endl;
					}

					for (int i = 0; i < 4; i++)
					{
						delete users[i];
					}
					delete[] users;

					for (int i = 0; i < 4; i++)
					{
						delete paidUsers[i];
					}
					delete[] paidUsers;
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
					//DiscountBase lol();
					
					int productsCount = 5;
					Product* products = new Product[]
					{
						Product(Category::TORTIK, "-BigCAKE", 1200),
						Product(Category::PIZZA, "-HowPIZA", 3000),
						Product(Category::TORTIK, "Delicious", 5600),
						Product(Category::GUACAMOLLY, "-Streamer", 9999),
						Product(Category::TORTIK, "WithMouse", 777)
					};
					DiscountBase* percentDiscount = new PercentDiscount(Category::TORTIK, 20);
					DiscountBase* certificateDiscount = new CertificateDiscount(Category::PIZZA, 3000);
					
					cout << "+++++++++++++Percent discount+++++++++++++" << endl;
					ShowClass::ShowCheckWithDiscount(percentDiscount, products, productsCount); 
					cout << endl << "+++++++++++++Certificate discount+++++++++++++" << endl;
					ShowClass::ShowCheckWithDiscount(certificateDiscount, products, productsCount);

					delete[] products;
					delete[] percentDiscount;
					delete[] certificateDiscount;
					products = nullptr;
					percentDiscount = nullptr;
					certificateDiscount = nullptr;
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
			}
			default:
			{
				system("cls");
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