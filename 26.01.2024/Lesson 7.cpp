#include <iostream>
#include <string>
#include <ctime>

#define random(a, b) (a + rand() % (b - a + 1))

const int countNames = 5;
const std::string names[] = { "Олег", "Паша", "Коля", "Вика", "Оля" };
const int countGroups = 7;

class Student {
private:
    static int id;
    int uniqId;
    std::string name;

public:
    Student() {
        name = names[random(0, countNames - 1)];
        uniqId = id++;
    }

    void showInfo() {
        std::cout << "ID: " << uniqId << ", Name: " << name << std::endl;
    }
};

int Student::id = 0;

class GroupName {
private:
    static int num;
    static char alpha;

public:
    static std::string getUniqGroupName() {
        if (num == 3)
            return "";
        int numPrev = num;
        char alphaPrev = alpha;
        if (alpha == 'Я') {
            alpha = 'А';
            num += 1;
        }
        else
            alpha++;

        return std::to_string(numPrev) + alphaPrev;
    }
};

int GroupName::num = 1;
char GroupName::alpha = 'А';

class Group {
private:
    static std::string* createdGroups;
    std::string uniqId;
    Student* students;
    int countStudents = 0;

public:
    Group() {
        uniqId = GroupName::getUniqGroupName();
        if (uniqId == "")
            std::cout << "Достигнут предел групп" << std::endl;
    }

    void showInfo() {
        if (uniqId != "")
            std::cout << "Группа " << uniqId << ": " << std::endl;
        for (int i = 0; i < countStudents; i++) {
            students[i].showInfo();
        }
    }

    bool addStudent(Student st) {
        if (countStudents == 5) {
            std::cout << "Превышен допустимый предел количества студентов" << std::endl;
            return false;
        }
        Student* buf = new Student[countStudents + 1];
        for (int i = 0; i < countStudents; i++) {
            buf[i] = students[i];
        }
        buf[countStudents++] = st;
      
        students = buf;
        return true;
    }
};

std::string* Group::createdGroups = nullptr;

int main() {
    setlocale(LC_ALL, "ru");
    srand(static_cast<unsigned int>(time(NULL)));

    Group* groups = new Group[countGroups];
    for (int i = 0; i < 30; i++) {
        Student st;
        while (!groups[random(0, countGroups - 1)].addStudent(st));
    }

    for (int i = 0; i < countGroups; i++) {
        groups[i].showInfo();
    }

    delete[] groups;

    return 0;
}
