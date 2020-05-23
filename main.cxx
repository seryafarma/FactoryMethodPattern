//-----------------------------------------------------------------------------
// File:   main.cxx
// Author: Enhope
// Date:   31-05-2019
//-----------------------------------------------------------------------------
#include <iostream>
#include "ToyFactory.hxx"

#include "plog/Log.h"
#include "plog/Appenders/ColorConsoleAppender.h"

//-----------------------------------------------------------------------------
int main()
{
    static plog::ColorConsoleAppender<plog::TxtFormatter> consoleAppender;
    plog::init(plog::debug, &consoleAppender);

    PLOGI << "Begin the factory pattern";
    ToyFactory tf;

    Toy::ToyPtr created_toy = tf.createToy(Factory::BIKE);
    created_toy->showProduct();

    return 0;
}
