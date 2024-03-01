#include "Meet.h"
#include "Product.h"
#include <iostream>

Meet::Meet(std::string name) :Product(name)
{
	type = "meet";
}

std::string Meet::img = "Meet.png";

