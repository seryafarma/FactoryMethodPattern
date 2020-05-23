//-----------------------------------------------------------------------------
// File:   Bike.hxx
// Author: Enhope
// Date:   31-05-2019
//-----------------------------------------------------------------------------
#ifndef BIKE_HXX_
#define BIKE_HXX_

#include <factory_method_pattern/Toy.hxx>

//-----------------------------------------------------------------------------
// \brief Bike class.
class Bike: public Toy
{
public:
    //! \brief Constructor.
    Bike(std::string name, unsigned int price);

    //! \brief Virtual destructor for subclasses.
    virtual ~Bike();

    //! \brief Show the product.
    virtual void showProduct();
};

#endif /* BIKE_HXX_ */
