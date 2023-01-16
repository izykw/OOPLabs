#include "CertificateDiscount.h"

CertificateDiscount::CertificateDiscount(Category category, const double amount) : DiscountBase(category)
{
	SetAmount(amount);
}

void CertificateDiscount::SetAmount(const double amount)
{
	const int MIN_VALUE = 0;
	const int MAX_VALUE = 10000;
	Validator::AssertValueInRange(amount, MIN_VALUE, MAX_VALUE);
	this->_amount = amount;
}


int CertificateDiscount::GetAmount()
{
	return this->_amount;
}

double CertificateDiscount::Calculate(Product* product)
{
	if (product->GetCategory() != this->GetCategory() || this->GetAmount() == 0)
	{
		return product->GetPrice();
	}

	if (product->GetPrice() > this->GetAmount())
	{
		double newPrice = product->GetPrice() - this->GetAmount();
		this->SetAmount(0);
		return newPrice;
	}

	if (product->GetPrice() <= this->GetAmount())
	{
		this->SetAmount(this->GetAmount() - product->GetPrice());
		return 0;
	}
}
