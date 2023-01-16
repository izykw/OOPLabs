#pragma once
#ifndef _VALIDATOR_H_
#define _VALIDATOR_H_

#include <string>

static class Validator
{
public:
	static bool IsStringValidate(std::string line);
	static bool IsValuePositive(const int value);
	static bool IsValueInRange(const double value, const double min, const double max);

	static void AssertStringValidate(std::string line);
	static void AssertPositiveValue(const int value);
	static void AssertValueInRange(const double value, const double min, const double max);
};

#endif // !_VALIDATOR_H_
