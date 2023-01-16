#include "Student.h"

Student::Student(std::string name, std::string surname, std::string patronymic, 
	const int gradebookNumber, const int yearAdmission) : Person(name, surname, patronymic)
{
	SetGradebookNumber(gradebookNumber);
	SetYearAdmission(yearAdmission);
}

void Student::SetGradebookNumber(const int gradebookNumber)
{
	Validator::AssertPositiveValue(gradebookNumber);
	this->_gradebookNumber = gradebookNumber;
}

void Student::SetYearAdmission(const int yearAdmission)
{
	Validator::AssertPositiveValue(yearAdmission);
	this->_yearAdmission = yearAdmission;
}

int Student::GetYearAdmission()
{
	return this->_gradebookNumber;
}

int Student::GradebookNumber()
{
	return this->_yearAdmission;
}
