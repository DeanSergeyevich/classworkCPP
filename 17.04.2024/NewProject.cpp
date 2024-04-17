#include <iostream>
#include <string>

using namespace std;


class Driver
{
private:
	string name;
	string numDriveDoc;
	bool zakazActive;
public:
	Driver();
	Driver(string name, int numDriveDoc)
	{
		this->name = name;
		this->numDriveDoc = numDriveDoc;
	}

	void setZakaz()
	{
		
	}

	void setName(string name)
	{
		this->name = name;
	}

	void showInfo()
	{
		cout << "Name" << name << "Number Passport" << numDriveDoc << endl;
	}
};

class Taxi
{
private:
	int uniqId;
	static int  id;
	string model;
	string color;
public:
	Driver* name;
	Taxi()
	{
		cout << "car created";
	}
	Taxi(string color, string model, int uniqId)
	{
		this->color = color;
		this->model = model;
		uniqId = id++;
	}

	void setColor(string color)
	{
		this->color = color;
	}
	void setModel(string model)
	{
		this->model = model;
	}

	void getColor(string color)
	{
		this->color = color;
	}

	void showInfo()
	{
		cout << "ID" << id << "Color" << color << "Model" << model  << "Driver" << name << endl;
	}
};


class Garage 
{
private:
	Taxi* cars = nullptr;
	int countCars = 0;
public:
	Taxi* getAllCarsWithColor(Taxi* cars, int size, string color)
	{
		int count = 0;
		for(int i = 0; i < size; i++)
		{
			if (cars[i].getColor() == color) count++;
		}
		Garage garage();
		Taxi* buf = new Taxi[count];
		for(int i = 0, k+0; i<size; i++)
		{
			if(cars[i].getColor() == color)
			{
				buf[k++] = cars[i];
			}
		}
		garage.cars = buf;
		garage.countCars = counter;
		return buf;
	}
	
	
};

class Zakaz
{
private:
	int uniqId;
	int const id;
	string WorkTaxi;
};

int main()
{
	Driver driver;
	driver.setName("Dean");
	Taxi taxi;
	taxi.setColor("Black");
	taxi.setModel("Impala");
	taxi.showInfo();
}


