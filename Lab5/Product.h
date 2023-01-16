#pragma once
#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <string>

#include "Validator.h"

enum class Category {
	NONE = -1,
	TORTIK,
	PIZZA,
	NACHOS,
	CHEESE,
	GUACAMOLLY,
	CHIPS
};

class Product
{
public:
	Product(Category categoryType, std::string name, const double price);

	void SetName(std::string name);
	void SetCategoryType(Category categoryType);
	void SetPrice(const double price);

	std::string GetName();
	Category GetCategory();
	double GetPrice();

private:
	std::string _name = "";
	Category _categoryType = Category::NONE;
	double _price = .0;
};

#endif // !_PRODUCT_H_
