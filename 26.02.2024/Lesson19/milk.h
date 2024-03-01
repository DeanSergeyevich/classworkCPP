#pragma once
#include "Product.h"
#include <string>
#include <iostream>

class milk: public Product
{
private:
	static std::string img;
public:
	milk(std::string name);
		
};

