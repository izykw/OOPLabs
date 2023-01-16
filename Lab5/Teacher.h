#pragma once
#ifndef _TEACHER_H_
#define _TEACHER_H_

#include "Person.h"

class Teacher : public Person
{
public:
	Teacher(std::string name, std::string surname, std::string patronymic, std::string position);

	void SetPosition(std::string position);

	std::string GetPosition();
private:
	std::string _position = "";
};

#endif // !_TEACHER_H_

