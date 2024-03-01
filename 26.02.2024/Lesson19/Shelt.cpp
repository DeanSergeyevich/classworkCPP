#include "Shelt.h"

Shelt::Shelt(int maxCount)
{
	this->maxCount = maxCount;
}

void Shelt::addProduct(Product* product)
{
	if(countProduct < maxCount)
	{
		int count = 0;
		bool flag = true;
		for(auto el : products)
		{
			if (el == nullptr)
			{
				flag = false;
				products[count] = product;
				break;
			}
			count++;
		}
		if (flag) products.push_back(product);
		countProduct++;
	}
}

void Shelt::showAllProduct()
{
	for(auto el : products)
	{
		if (el != nullptr)
		{
			el->getInfo();
		}
		else cout << "----" << endl;
	}
}

Product* Shelt::getProductByIndex(int index)
{
	Product* buf = *(products.begin() + index);
	products[index] = nullptr;
	countProduct--;
	return buf;
}


