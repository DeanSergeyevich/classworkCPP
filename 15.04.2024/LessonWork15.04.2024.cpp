#include <iostream>
#include <string>
#include <vector>
// Необходимо создать класс в который будет содержать в себе разных животных(собак, кошек, коровы, )

// Создайте класс студент (уник ид, имя, фамиллия), сделайте список из уник. студентов, найдите студента по индетификатору.

// Класс у студента (имя, фамлиля, отчество,), реал. возможность указания, любого из значении

using namespace std;

class Animal 
{
public:

	void virtual show() = 0;
};

class Dog : public Animal
{
private:
	string name;
	int CountDog;
public:
	void show()
	{
		cout << "Dog" << name << endl;
	};
};

class Cat : public Animal
{
private:
	string name;
	int CountCat;
public:
	void show()
	{
		cout << "Cat" << name << endl;
	};
};

class Cow : public Animal
{
private:
	string name;
	int CountCow;
public:
	void show()
	{
		cout << "Cow" << name << endl;
	};
};



class Zoo 
{
private:
	vector<Animal*> animals;
public:
	void add(Animal* animal)
	{
		animals.push_back(animal);
	}
	void showAll()
	{
		for(auto el : animals)
		{
			el->show();
		}
	}
};



class Student
{
private:
	int unique;
	static int id;
	string name;
	string fam;
	string second_name;
public:
	Student(){}
	Student(string name) { this->name = name; }
	Student(string name, string fam):Student(name)
	{
		this->unique = id++;
		this->name = name;
		this->fam = fam;
	}
	int getUnique() { return unique; }
	void show()
	{
		cout << id << name << fam << endl;
	}

	void addOnlyName(string name)
	{
		
	}
};
int Student::id = 0;


class StudentsGroup 
{
public:
	vector<Student> students;
public:
	void add(Student* st)
	{
		for(auto el: students)
		{
			if(el.getUnique() == st->getUnique())
			{
				throw "use in group";
			}
		}
		students.push_back(st);
	}
	void addToSet(Students* st)
	{
		students2.insert(st);
	}
	void showAll()
	{
		for(auto el: students)
		{
			el->show();
		}
	}
};


int main()
{
	Student* st1 = new Student("Alex", "Petrov");
	Student* st2 = new Student("Alex", "Petrov");
	Student* st3 = new Student("Jonh", "Ykov");
	Student* st4 = new Student("Alexia", "Petrova");
	
	StudentsGroup group;
	group.addToSet(st1);
	group.addToSet(st2);
	group.addToSet(st2);
	group.addToSet(st3);
	group.addToSet(st4);

	
}

