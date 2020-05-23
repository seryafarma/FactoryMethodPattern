//-----------------------------------------------------------------------------
// File:   ToyFactory.hxx
// Author: Enhope
// Date:   31-05-2019
//-----------------------------------------------------------------------------
#ifndef TOYFACTORY_HXX_
#define TOYFACTORY_HXX_

#include <factory_method_pattern/Toy.hxx>
//-----------------------------------------------------------------------------
// \brief Factory class.
class Factory
{
public:
    //! \brief Virtual destructor for subclasses.
    virtual ~Factory();

    typedef enum
    {
        BIKE,
        CAR,
        PLANE
    } ToyType;

    virtual Toy::ToyPtr createToy(Factory::ToyType type) = 0;
};

//-----------------------------------------------------------------------------
// \brief Toy Factory class.
class ToyFactory
{
public:
    //! \brief Constructor.
    ToyFactory();

    //! \brief Virtual destructor for subclasses.
    virtual ~ToyFactory();

    Toy::ToyPtr createToy(Factory::ToyType type);
};

#endif /* TOYFACTORY_HXX_ */
