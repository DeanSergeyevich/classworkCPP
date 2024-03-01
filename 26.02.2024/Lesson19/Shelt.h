#pragma once
#include "Product.h"
#include <vector>
using namespace std;

class Shelt
{
	vector<Product*> products;
	int maxCount;
	int countProduct = 0;
public:
	Shelt(int maxCount);
	void addProduct(Product* product);
	void showAllProduct();
	Product* getProductByIndex(int index);
	
};

