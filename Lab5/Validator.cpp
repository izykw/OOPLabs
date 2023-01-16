#include "Validator.h"

bool Validator::IsStringValidate(std::string line)
{
	std::string simbol = {';', '¹', '%', '?', '&', '^', '*', '@', '!', '#', ':', '<', '>',
		'+', ')', '(','{', '}', ',', '/'};

	return (line.find_first_of(simbol) == -1);
}

bool Validator::IsValuePositive(const int value)
{
	return (value >= 0);
}

bool Validator::IsValueInRange(const double value, const double min, const double max)
{
	return ((value >= min) && (value <= max));
}


void Validator::AssertStringValidate(std::string line)
{
	if (!IsStringValidate(line))
	{
		throw std::exception("\nString cannot contain extra characters\n");
	}
}

void Validator::AssertPositiveValue(const int value)
{
	if (!IsValuePositive(value))
	{
		throw std::exception("\nValue cant be less 0\n");
	}
}

void Validator::AssertValueInRange(const double value, const double min, const double max)
{
	if (!IsValueInRange(value, min, max))
	{
		throw std::exception("\nValue is out of range\n");
	}
}
