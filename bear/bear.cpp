// ----------------------------------------------------------------------------
// Name: bear.cpp
// Abstract: This is the bear dll
// ----------------------------------------------------------------------------
#include "pch.h"
#include <iostream>
#include "bear.h"



// ----------------------------------------------------------------------------
// Name: Bear::feed_bear()
// Abstract: Member method to feed the bear
// ----------------------------------------------------------------------------
void Bear::feed_bear()
{

    std::cout << translate("eat", "Feeding Bear\n");

} // End Bear::feed_bear()



// ----------------------------------------------------------------------------
// Name: Bear::play_hide_and_go_seek
// Abstract: Member method to play hide and go seek
// ----------------------------------------------------------------------------
void Bear::play_hide_and_go_seek()
{

    std::cout << "Playing hide and go seek!\n";

} // End Bear::play_hide_and_go_seek()



// ----------------------------------------------------------------------------
// Name: get_bear()
// Abstract: Return a new instance of a bear
// ----------------------------------------------------------------------------
BEAR_API Bear* get_bear()
{

    return new Bear();

} // End get_bear()



// ----------------------------------------------------------------------------
// Name: feed_bear()
// Abstract: Non-member method to Feed the bear
// ----------------------------------------------------------------------------
BEAR_API void feed_bear(Bear* bear)
{

    bear->feed_bear();

} // End feed_bear()



// ----------------------------------------------------------------------------
// Name: play_hide_and_go_seek()
// Abstract: Non-member method to play hide and go seek
// ----------------------------------------------------------------------------
BEAR_API void play_hide_and_go_seek(Bear* bear)
{

    bear->play_hide_and_go_seek();

} // End play_hide_and_go_seek()
