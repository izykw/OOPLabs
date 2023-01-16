#include "Product.h"

Product::Product(Category categoryType, std::string name, const double price)
{
	SetCategoryType(categoryType);
	SetName(name);
	SetPrice(price);
}


void Product::SetName(std::string name)
{
	Validator::AssertStringValidate(name);
	this->_name = name;
}

void Product::SetCategoryType(Category categoryType)
{
	this->_categoryType = categoryType;
}

void Product::SetPrice(const double price)
{
	const int MIN_VALUE = 0;
	const int MAX_VALUE = 100000;
	Validator::AssertValueInRange(price, MIN_VALUE, MAX_VALUE);
	this->_price = price;
}


std::string Product::GetName()
{
	return this->_name;
}

Category Product::GetCategory()
{
	return this->_categoryType;
}

double Product::GetPrice()
{
	return this->_price;
}
