#include "Person.h"

Person::Person(std::string name, std::string surname, std::string patronymic)
{
	SetName(name);
	SetSurname(surname);
	SetPatronymic(patronymic);
}

void Person::SetName(std::string name)
{
	Validator::AssertStringValidate(name);
	this->_name = name;
}

void Person::SetSurname(std::string surname)
{
	Validator::AssertStringValidate(surname);
	this->_surname = surname;
}

void Person::SetPatronymic(std::string patronymic)
{
	Validator::AssertStringValidate(patronymic);
	this->_patronymic = patronymic;
}

std::string Person::GetName()
{
	return this->_name;
}

std::string Person::GetSurname()
{
	return this->_surname;
}

std::string Person::GetPatronymic()
{
	return this->_patronymic;
}

