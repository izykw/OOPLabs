#pragma once
#ifndef _DOUBLEVALIDATOR_H_
#define _DOUBLEVALIDATOR_H_

#include <iostream>
#include <exception> //TODO: Зачем подключать, если без нее все работает также.

static class DoubleValidator
{
public:
	static bool IsValuePositive(const double value);
	static bool IsValueInRange(const double value, const double min, const double max);
	static void AssertPositiveValue(const double value);
	static void AssertValueInRange(const double value, const double min, const double max);
};
#endif // !_DOUBLEVALIDATOR_H_
