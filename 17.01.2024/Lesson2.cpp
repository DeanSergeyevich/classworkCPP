#include <iostream>
#include <string>
#include <random>

using namespace std;


class Car
{
private:
        string color;
        string model;
        float price;
public:

    Car()
    {
        cout << "car created ";
    }
    Car(string color, string model)
    {
        this->color = color;
        this->model = model;
        
    }
    Car(string color, string model, float price):
  
    Car(color, model)
    {
        this->price = price;
    }

 

    void setColor(string color)
    {
        this -> color = color;
    }
    void setModel(string model)
    {
        this->model = model;
    }
    void setPrice(float price)
    {
        this->price = price;
    }
    float getPrice()
    {
        return price;
    }
    void getColor(string color) 
    {
        this->color = color;
    }
    string toString()
    {
        return "color: " + color + "\n model: " + model + " \n price: " + to_string(price);
    }
};

Car getMinPriceCar(Car& car1, Car& car2)
{
   if (car1.getPrice() < car2.getPrice())
      return car1; 
    else
      return car2;
}

void changeColor(Car& car)
{
    car.setColor("gold");
}

Car& createCopy(Car car)
{
    
    return car;
    
}


//struct Garage
//{
//    Car* cars = nullptr;
//    int countCars = 0;
//};
//
//Car* getAllCarsWithColor(Car* cars, int size, string color) 
//{
//    int count = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if (cars[i].getColor() == color) count++;
//    }
//    Garage garege;
//    Car* buf = new Car[count];
//    for (int i = 0, k + 0; i < size; i++) 
//    {
//        if (cars[i].getColor() == color) 
//        {
//            buf[k++] = cars[i];
//        }
//    }
//    garage.cars = buf;
//    garage.countCars = counter;
//    return buf;
//}


class Student
{
    string name;
    float mark;
public:
    Student (string name, float mark)
    {
        this->name = name;
        this->mark = mark;
    }
    void showInfo()
    {
        cout << name << " : " << mark << endl;
    }
};






int main()
{
    string names[] = { "Pol", "Alex", "Karl", "Evgen" };
    int countOfStudents = 8;
    Student* st = new Student*[countOfStudents];
    for(int i = 0; i < countOfStudents; i++)
    {
        st[i] = new Student(random(0, countOfStudents - 1)) random(2, 4)
    } + random(2, 9) * 0.1);
    st[i]->showInfo();
    }


   /* const int COUNT_CARS = 7;
    Car* cars = new Car[COUNT_CARS]{
    Car("Red", "Volga", 10000),
    Car("Blue", "Impala", 25000),
    Car("Yellow", "BMV", 30000),
    Car("Green", "Skylyne", 34000),
    Car("black", "BMV", 30000),
    Car("black", "Skylyne", 34000), 
    Car("black", "BMV", 30000),
    };

    for (int i = 0; i < COUNT_CARS; i++) 
    {
        cout << garage.cars[i].toString();
    }

    Car* cars2 = getAllCarsWithColor(cars, COUNT_CARS, "black");*/

    

   /* float maxPrice = cars[0].getPrice();
    int id = 0;
    for(int i = 0; i< 4; i++)
    {
        if(maxPrice<cars[i].getPrice())
        {
            maxPrice < cars[i].getPrice();
            id = i;
        }
    }*/
   // cout << cars[id].toString();

    Car car1("Black", "lada");
   // car1.setColor("red");
   // car1.setModel("merc");
   // car1.setPrice(10000);
    //cout << car1.toString();
  //  cout << endl;
    //Car car2("silver", "audi", 3000);
    //getMinPriceCar(car1, car2).toString();
   // changeColor(car1);
    //cout << car1.toString();
    
   

   /* Car car3 = createCopy(car2);
    cout << endl;
    cout << car2.toString();*/
    
}

