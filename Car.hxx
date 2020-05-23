//-----------------------------------------------------------------------------
// File:   Car.hxx
// Author: Enhope
// Date:   31-05-2019
//-----------------------------------------------------------------------------
#ifndef CAR_HXX_
#define CAR_HXX_

#include <factory_method_pattern/Toy.hxx>

//-----------------------------------------------------------------------------
// \brief Car class.
class Car: public Toy
{
public:
    //! \brief Constructor.
    Car(std::string name, unsigned int price);

    //! \brief Virtual destructor for subclasses.
    virtual ~Car();

    //! \brief Show the product.
    virtual void showProduct();
};

#endif /* CAR_HXX_ */
