#include <iostream>
#include "SingleTon.h"
#include "Bulder.h"
#define SINGLETON
#define BUILDER

using namespace std;

class President
{
    private:
        string name;
        static President* instance;
        President(string name)
        {
            this->name = name;
        }
public:
    static President* getInstance(string name)
    {
        if(instance==nullptr)
        {
            instance = new President(name);
        }
        return instance;
    }
    void showInfo()
    {
        cout << this << " : " << name;
    }
};

President* President::instance = nullptr;

int main()
{
   /* President* pr1 = President::getInstance("Putin");
    President* pr2 = President::getInstance("Medvedev");
    pr1->showInfo();
    pr2->showInfo();*/

#ifdef SINGLETON
#endif // SINGLETON
    
#ifdef BUILDER
    CarBuilder builder1;
    CarDocumentationBuilder builder2;
    builder1.setColor("red");
    builder1.setModel("CLS");
    builder1.setBrand("Mercedes");

    builder2.setColor("red");
    builder2.setModel("CLS");
    builder2.setBrand("Mercedes");

#endif //BUILDER
}