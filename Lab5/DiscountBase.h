#pragma once
#ifndef _DISCOUNTBASE_H_
#define _DISCOUNTBASE_H_

#include "Product.h"

class DiscountBase
{
public:
	Category GetCategory();
	double virtual Calculate(Product* product) = 0;
protected:
	DiscountBase(Category category);
private:
	void SetCategory(Category category);
	Category _category = Category::NONE;
};

#endif // !_DISCOUNTBASE_H_

