#pragma once
#ifndef _PERCENT_DISCOUNT_H_
#define _PERCENT_DISCOUNT_H_

#include "DiscountBase.h"

class PercentDiscount : public DiscountBase
{
public:
	PercentDiscount(Category category, const int percent);

	void SetPercent(const int percent);

	int GetPercent();

	double Calculate(Product* product) override;
private:
	int _percent = 0;
};

#endif // !_PERCENT_DISCOUNT_H_

