﻿#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main()
{
   int ar[] = {5, 3, 4, 2, 6};
   BinaryTree<int> tree;
    for (int i = 0; i < 5; i++)
    {
        tree.add(ar[i]);
    }
   
    /*Node<int>* el = tree.getEl(2);
    cout << el->value;*/
    //cout << endl;
    //tree.smallleftRotate();
    tree.smallrightRotate();
    cout << endl;
    tree.show();
   
}
