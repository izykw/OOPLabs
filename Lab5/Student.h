#pragma once
#ifndef _STUDENT_H_
#define _STUDENT_H_

#include "Person.h"

class Student : public Person
{
public:
	Student(std::string name, std::string surname, std::string patronymic, const int gradebookNumber, const int yearAdmission);

	void SetGradebookNumber(const int gradebookNumber);
	void SetYearAdmission(const int yearAdmission);

	int GetYearAdmission();
	int GradebookNumber();
private:
	int _gradebookNumber = 0;
	int _yearAdmission = 0;
};

#endif // !_STUDENT_H_


