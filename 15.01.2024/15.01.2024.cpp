#include <iostream>


using namespace std;


class Student 
{
private:
	string name;
	int age;

public:
	Student(string name, int age)
	{
		this->age = age;
		this->name = name;
	}
	void show()
	{
		cout << "name: " << name << " age: " << age << endl;
	}

};



// создать класс Дробь
// Объект данного класса должен состоять из числителя и знаменателя в обязательном порядке
// Реализовать метод вывода дроби в  виде: 3/6

class Fraction
{
private:
	int total = 0;
	int num;
	int denum;
public:
	Fraction(int num, int denum)
	{
			total = num / denum;
		
		this->num = num % denum;
		
		this->denum = denum;

	}
	void show() {
		if (total == 0)
		cout << total << " " << num << "/" << denum << endl;
		
	}
	
};

/*
студент: номер группы, имя, ср. балл методы
выводить всю информацию о студенте
определять является ли студент отличником, хорошистом , троечником и двоечник..
*/

class StudentI
{
private:
	string number;
	string name;
	float sr_ball;
public:
	StudentI(string number, string name, float sr_ball)
	{
		this->number = number;
		this->name = name;
		this->sr_ball = sr_ball;
	}
	void show()
	{
		cout << "Номер группы " << number << " " << "Имя " << name << " " << "Средний балл "  << sr_ball << endl;
	}
	string getStatus()
	{
		if (sr_ball > 4.6) return "A";
		if (sr_ball > 3.6) return "B";
		if (sr_ball > 2.6) return "C";
		else return "D";
	}
};


int main()
{
	setlocale(LC_ALL, "ru");
	/*Student st1("Pol", 23);
	st1.show();*/

	Fraction num1(3, 6);
	Fraction num2(23, 10);
	num1.show();
	num2.show();

	/*StudentI st1("d37", "Dima", 4.5);
	StudentI st2("b36", "Vasia", 3.5);
	StudentI st3("C41", "Sergey", 4.6);
	st1.show();
	st2.show();
	st3.show();
	cout << st1.getStatus() << endl;
	cout << st2.getStatus() << endl;
	cout << st3.getStatus() << endl;*/
}