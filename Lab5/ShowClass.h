#pragma once
#ifndef _SHOWCLASS_H_
#define _SHOWCLASS_H_

#include <iostream>

#include "Person.h"
#include "DiscountBase.h"

static class ShowClass
{
public:
	static void ShowCheckWithDiscount(DiscountBase* discount, Product* products, int productsCount);
	static void ShowPerson(Person* person);
};

#endif // !_SHOWCLASS_H_

