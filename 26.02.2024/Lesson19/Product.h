#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product
{
protected:
	std::string name;
	std::string type;

public:
	Product(std::string name);
	void getInfo();
};

