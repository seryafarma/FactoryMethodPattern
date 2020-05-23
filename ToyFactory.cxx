//-----------------------------------------------------------------------------
// File:   ToyFactory.cxx
// Author: Enhope
// Date:   31-05-2019
//-----------------------------------------------------------------------------
#include <factory_method_pattern/ToyFactory.hxx>
#include "Bike.hxx"
#include "Car.hxx"
#include "Plane.hxx"

#include <plog/Log.h>

//-----------------------------------------------------------------------------
ToyFactory::ToyFactory()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
ToyFactory::~ToyFactory()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
Toy::ToyPtr ToyFactory::createToy(Factory::ToyType type)
{
    Toy::ToyPtr return_toy;

    switch(type)
    {
    case Factory::BIKE:
        PLOGI << "Making the bike toy";
        return_toy = Toy::ToyPtr(new Bike("Bike Toy", 10));
        break;
    case Factory::CAR:
        PLOGI << "Making the car toy";
        return_toy = Toy::ToyPtr(new Car("Car Toy", 35));
        break;
    case Factory::PLANE:
        PLOGI << "Making the plane toy";
        return_toy = Toy::ToyPtr(new Plane("Plane Toy", 50));
        break;
    }

    return_toy->prepareParts();
    return_toy->combineParts();
    return_toy->assembleParts();
    return_toy->applyLabel();

    return return_toy;
}
