#include "Fish.h"
#include "Product.h"
#include <iostream>

Fish::Fish(std::string name) :Product(name)
{
	type = "fish";
}

std::string Fish::img = "img.png";

