//-----------------------------------------------------------------------------
// File:   Toy.hxx
// Author: Enhope
// Date:   31-05-2019
//-----------------------------------------------------------------------------
#ifndef TOY_HXX_
#define TOY_HXX_

#include <string>
#include <memory>

//-----------------------------------------------------------------------------
// \brief Toy class.
class Toy
{
public:
    //! \brief Constructor.
    Toy(std::string name, unsigned int price);

    //! \brief Virtual destructor for subclasses.
    virtual ~Toy();

    // Smart Pointer.
    typedef std::unique_ptr<Toy> ToyPtr;

    //! \brief Prepare the parts.
    void prepareParts();

    //! \brief Combine the parts.
    void combineParts();

    //! \brief Assemble the parts.
    void assembleParts();

    //! \brief Apply the label to the toy.
    void applyLabel();

    //! \brief Show the product.
    virtual void showProduct();

    //! \brief Getter of the name.
    //! \return m_name.
    std::string getName();

    //! \brief Getter of the price.
    //! \return m_price.
    unsigned int getPrice();

private:
    //!< The name of the toy.
    std::string m_name;
    //!< The price of the toy.
    unsigned int m_price;
};

#endif /* TOY_HXX_ */
