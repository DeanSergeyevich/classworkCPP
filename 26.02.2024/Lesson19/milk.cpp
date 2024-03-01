#include "milk.h"
#include "Product.h"
#include <iostream>

milk::milk(std::string name):Product(name) 
{
	type= "milk";
}

std::string milk::img = "milk.png";

