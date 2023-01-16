#include "PercentDiscount.h"

PercentDiscount::PercentDiscount(Category category, const int percent) : DiscountBase(category)
{
	SetPercent(percent);
}

void PercentDiscount::SetPercent(const int percent)
{
	const int MIN_VALUE = 0;
	const int MAX_VALUE = 100;
	Validator::AssertValueInRange(percent, MIN_VALUE, MAX_VALUE);
	this->_percent = percent;
}

int PercentDiscount::GetPercent()
{
	return this->_percent;
}

double PercentDiscount::Calculate(Product* product)
{
	if (product->GetCategory() != this->GetCategory())
	{
		return product->GetPrice();
	}

	return (product->GetPrice() - (product->GetPrice() * (this->GetPercent() * 0.01)));
}
