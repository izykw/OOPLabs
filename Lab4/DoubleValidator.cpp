#include "DoubleValidator.h"

bool DoubleValidator::IsValuePositive(const double value)
{
    return (value >= 0);
}

bool DoubleValidator::IsValueInRange(const double value, const double min, const double max)
{
    return ((value > min) && (value < max));
}

void DoubleValidator::AssertPositiveValue(const double value)
{
	if (!IsValuePositive(value))
	{
		throw std::exception("\nValue cant be less 0\n");
	}
}

void DoubleValidator::AssertValueInRange(const double value, const double min, const double max)
{
	if (!IsValueInRange(value, min, max))
	{
		throw std::exception("\nValue is out of range\n");
	}
}
