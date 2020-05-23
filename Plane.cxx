//-----------------------------------------------------------------------------
// File:   Plane.cxx
// Author: Enhope
// Date:   31-05-2019
//-----------------------------------------------------------------------------
#include <factory_method_pattern/Plane.hxx>
#include <plog/Log.h>

//-----------------------------------------------------------------------------
Plane::Plane(std::string name, unsigned int price)
:
   Toy(name, price)
{
    PLOGD;
}

//-----------------------------------------------------------------------------
Plane::~Plane()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
void Plane::showProduct()
{
    PLOGD;
    PLOGI << "Plane product show. Name: " << this->getName() << ", price: " << this->getPrice();
}
