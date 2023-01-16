#pragma once
#ifndef _PERSON_H_
#define _PERSON_H_


#include <string>

#include "Validator.h"

class Person
{
public:
	Person(std::string name, std::string surname, std::string patronymic);

	void SetName(std::string name);
	void SetSurname(std::string surname);
	void SetPatronymic(std::string patronymic);

	std::string GetName();
	std::string GetSurname();
	std::string GetPatronymic();

private:
	std::string _name = "";
	std::string _surname = "";
	std::string _patronymic = "";
};

#endif // !_PERSON_H_