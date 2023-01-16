#include "ShowClass.h"

void ShowClass::ShowPerson(Person* person)
{
    std::cout << person->GetName() << " " << person->GetSurname()
        << " " << person->GetPatronymic() << std::endl;
}

void ShowClass::ShowCheckWithDiscount(DiscountBase* discount, Product* products, int productsCount)
{
    double fullCostWithDiscount = .0;
    double currentDiscount = .0;
    for (int i = 0; i < productsCount; i++)
    {
        double currentDiscount = discount->Calculate(&products[i]);
        std::cout << products[i].GetName() << "\t" << "Old Cost: " << products[i].GetPrice()
            << "\tNew Price: " << currentDiscount << std::endl;
        fullCostWithDiscount += currentDiscount;
    }
    std::cout << std::endl << "Full Cost with discount = " << fullCostWithDiscount << std::endl;
}