#include <iostream>
#include "Product.h"
#include <vector>
#include "milk.h"
#include "Shelt.h"
#include "Fish.h"
#include "Meet.h"
#define random(a,b) a+rand()%(b+1-a)

using namespace std;

// Холодильник, в этом холодильнике есть полки, у каждой полки макс. вместимость, 
// также есть продукт (Молоко, Рыбка, Колбоса)


string names[] = {"name1", "name2", "name3"};





int main()
{
    /*vector<int> array1 = { 2,5,3,7 };
    array1.push_back(45);
    array1[2] = 89;
    vector<int>::iterator iter = array1.begin();*/
    /*while(iter!=array1.end())
    {
        cout << *iter<<" ";
        iter++;
    }*/

    /*for(auto el: array1)
    {
        cout << el << " ";
    }
    array1.push_back(67);
    array1.pop_back();
*/


    /*for(int i=0; i<array1.size(); i++)
    {
        cout << array1[i] << " ";
    }*/

    srand(time(NULL));
    Shelt shelt1(7);
    for(int i = 0; i < 4; i++)
    {
        shelt1.addProduct(new milk(names[random(0, 2)]));
    }
    for (int i = 0; i < 4; i++)
    {
        shelt1.addProduct(new Meet(names[random(0, 2)]));
    }
    for (int i = 0; i < 4; i++)
    {
        shelt1.addProduct(new Fish(names[random(0, 2)]));
    }

    shelt1.showAllProduct();
    shelt1.getProductByIndex(2)->getInfo();
    cout << "after" << endl;
    shelt1.showAllProduct();
    shelt1.addProduct(new Fish(names[random(0, 2)]));
    cout << "after" << endl;
    shelt1.showAllProduct();
    
}


