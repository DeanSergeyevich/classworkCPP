#include <iostream>
#include "FileReader.h"
#include <Windows.h>
#include "Student.h"
#include <string>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //// test FileReader
    //FileReader fr;
    //Lines lines = fr.read("Student.xml");
    //string* array = lines.getArray();
    //for(int i = 0; i< lines.getCountString(); i++)
    //{
    //    cout << array[i] << endl;
    //}


    FileReader fr;
    Lines lines = fr.read("Student.xml");
    Student** student = new Student*[lines.getCountString()];
    for(int i = 0; i < lines.getCountString(); i++)
    {
        Lines line(lines.getArray()[0], ';');
        student[i] = new Student(line);
    }
    for(int i = 0; i < lines.getCountString(); i++)
    {
        student[i]->showInfo();
    }

    /*Lines line(lines.getArray()[0], ';');
    Student st(line);
    st.showInfo();*/

    return 0;
}


