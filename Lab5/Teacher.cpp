#include "Teacher.h"

Teacher::Teacher(std::string name, std::string surname, std::string patronymic, std::string position) 
	: Person(name, surname, patronymic)
{
	SetPosition(position);
}

void Teacher::SetPosition(std::string position)
{
	Validator::IsStringValidate(position);
	this->_position = position;
}

std::string Teacher::GetPosition()
{
	return this->_position;
}
