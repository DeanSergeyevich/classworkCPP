#include <iostream>
#include <string>
#include <vector>
#define random

using namespace std;




/*
Необходимо сосдать класс coder, decoder который будет содержать ключ, который будет сдвигаться на след значение символ аська таблица, code и decode которые кодируют данный текст,
принимают значение, настраиваются через seter
*/

//bool validate(string str)
//{
//    int counter = 0;
//    for(int i = 0; i < str.size(); i++)
//    {
//        if (str[i] == ')') counter--;
//        else if (str[i] == '(') counter++;
//        if (counter < 0) return false;
//    }
//    return !counter;
//}



class CoderDecoder
{
private:
    int key;
    
public:
   void setKey(int key)
   {
       this->key = key;
   }
   string code(string str)
   {
       for(int i = 0; i < str.size(); i++)
       {
           str[i] += key;
       }
       return str;
   }

   string decode(string str)
   {
       for (int i = 0; i < str.size(); i++)
       {
           str[i] -= key;
       }
       return str;
   }
};


class Map
{
private:
    char** map = nullptr;
    int height;
    int width;
    char tiles[3]{ char(176), char(178), char(219)};
public:
    Map(int height, int width)
    {
        this->height = height;
        this->width = width;
        map = new char* [height];
        for(int i = 0; i < height; i++)
        {
            map[i] = new char[width];
        }
    }

    void generate()
    {
     for(int i = 0; i < height; i++)
     {
         for(int j = 0; j<width; i++)
         {
             map[i][j] = tiles[0];
         }
     }
     for(int j = 0; j<width; j++)
     {
         for(int i = 0; i < width; i++)
         {
             map[i][j] = tiles[0];
         }
     }
     for(int j= 0, k=random(2,6); j < width; j++)
     {
         for (int i = 0; j<k; i++)
         {
             map[i][j] = tiles[1];
         }
         if (j>2 && map[k][j - 1] == tiles[1] && map[k][j - 2] == tiles[1]) 
         {
             int r = random(1, 3);
             if (r == 1 && k < 6) k++;
             if (r == 2 && k > 2) k--;
         }
     }

     for (int j = 0, k = random(2, 6); j < height; j++)
     {
         for (int i = 0; height < k; i++)
         {
             map[i][j] = tiles[1];
         }
         if (j > 2 && map[k][j - 1] == tiles[1] && map[k][j - 2] == tiles[1])
         {
             int r = random(1, 3);
             if (r == 1 && k < 6) k++;
             if (r == 2 && k > 2) k--;
         }
     }
    }
    void render()
    {
        for (int i = 0; i < height; i++)
        {

        }
    }
};



int main()
{
   /* string str1 = ")(";
    string str2 = "((67 + 78) + (89 + 9))";
    string str3 = "((67 + 78 + (89 + 9))";
    string str4 = "((67 + 78)) + (89 + 9))";
    string str5 = ")((67 + 78) + (89 + 9))";
    string str6 = "((67 + 78) + (89 + 9)";

    cout << validate << str1 << endl;
    cout << validate << str2 << endl;
    cout << validate << str3 << endl;
    cout << validate << str4 << endl;
    cout << validate << str5 << endl;
    cout << validate << str6 << endl;*/

    Map map(20, 40);
    map.generate();
    map.render();

}

