#pragma once
#ifndef _CERTIFICATE_DISCOUNT_H_
#define _CERTIFICATE_DISCOUNT_H_

#include "DiscountBase.h"

class CertificateDiscount : public DiscountBase
{
public:
	CertificateDiscount(Category category, const double amount);

	void SetAmount(const double amount);

	int GetAmount();

	double Calculate(Product* product) override;
private:
	double _amount = 0;
};

#endif // !_CERTIFICATE_DISCOUNT_H_
