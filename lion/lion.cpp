// ----------------------------------------------------------------------------
// Name: lion.cpp
// Abstract: This is the lion dll
// ----------------------------------------------------------------------------
#include "pch.h"
#include <iostream>
#include "lion.h"



// ----------------------------------------------------------------------------
// Name: Lion::feed_lion()
// Abstract: Member method to feed the lion
// ----------------------------------------------------------------------------
void Lion::feed_lion()
{

    std::cout << "Feeding Lion\n";

} // End Lion::feed_lion()



// ----------------------------------------------------------------------------
// Name: Lion::play_marco_polo()
// Abstract: Member method to play marco polo
// ----------------------------------------------------------------------------
void Lion::play_marco_polo()
{

    std::cout << "Playing marco polo!\n";

}



// ----------------------------------------------------------------------------
// Name: get_lion()
// Abstract: Return a new instance of a lion
// ----------------------------------------------------------------------------
LION_API Lion* get_lion()
{

    return new Lion();

} // End get_lion()



// ----------------------------------------------------------------------------
// Name: feed_lion()
// Abstract: Non-member method to Feed the lion
// ----------------------------------------------------------------------------
LION_API void feed_lion(Lion* lion)
{

    lion->feed_lion();

} // End feed_lion()



// ----------------------------------------------------------------------------
// Name: play_marco_polo
// Abstract: Non-member method to play marco polo
// ----------------------------------------------------------------------------
LION_API void play_marco_polo(Lion* lion)
{

    lion->play_marco_polo();

} // End play_marco_polo()