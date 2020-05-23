//-----------------------------------------------------------------------------
// File:   Car.cxx
// Author: Enhope
// Date:   31-05-2019
//-----------------------------------------------------------------------------
#include <factory_method_pattern/Car.hxx>
#include <plog/Log.h>

//-----------------------------------------------------------------------------
Car::Car(std::string name, unsigned int price)
:
   Toy(name, price)
{
    PLOGD;
}

//-----------------------------------------------------------------------------
Car::~Car()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
void Car::showProduct()
{
    PLOGD;
    PLOGI << "Car product show. Name: " << this->getName() << ", price: " << this->getPrice();
}
