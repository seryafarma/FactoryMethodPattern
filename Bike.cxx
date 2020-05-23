//-----------------------------------------------------------------------------
// File:   Bike.cxx
// Author: Enhope
// Date:   31-05-2019
//-----------------------------------------------------------------------------
#include <factory_method_pattern/Bike.hxx>
#include <plog/Log.h>

//-----------------------------------------------------------------------------
Bike::Bike(std::string name, unsigned int price)
:
    Toy(name, price)
{
    PLOGD;
}

//-----------------------------------------------------------------------------
Bike::~Bike()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
void Bike::showProduct()
{
    PLOGD;
    PLOGI << "Bike product show. Name: " << this->getName() << ", price: " << this->getPrice();
}
