// ----------------------------------------------------------------------------
// Name: cages.cpp
// Abstract: This is the cages dll
// ----------------------------------------------------------------------------
#include "pch.h"
#include "cages.h"
#include <iostream>
#include "lion.h"
#include "bear.h"
#include "tiger.h"



// ----------------------------------------------------------------------------
// Name: feed_animals
// Abstract: The main method for the cages dll
// ----------------------------------------------------------------------------
void feed_animals()
{

	std::cout << translate("\n\nFeeding the Animals!!!\n");

	Bear* bear = get_bear();
	feed_bear(bear);	
	
	Lion* lion = get_lion();
	feed_lion(lion);	
	
	Tiger* tiger = get_tiger();
	feed_tiger(tiger);

} // End feed_animals()