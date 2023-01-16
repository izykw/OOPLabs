#include "DiscountBase.h"

Category DiscountBase::GetCategory()
{
    return this->_category;
}

DiscountBase::DiscountBase(Category category)
{
    SetCategory(category);
}

void DiscountBase::SetCategory(Category category)
{
    this->_category = category;
}
