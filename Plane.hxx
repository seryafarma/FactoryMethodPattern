//-----------------------------------------------------------------------------
// File:   Plane.hxx
// Author: Enhope
// Date:   31-05-2019
//-----------------------------------------------------------------------------
#ifndef PLANE_HXX_
#define PLANE_HXX_

#include <factory_method_pattern/Toy.hxx>

//-----------------------------------------------------------------------------
// \brief Plane class.
class Plane: public Toy
{
public:
    //! \brief Constructor.
    Plane(std::string name, unsigned int price);

    //! \brief Virtual destructor for subclasses.
    virtual ~Plane();

    //! \brief Show the product.
    virtual void showProduct();
};

#endif /* PLANE_HXX_ */
