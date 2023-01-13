#include <iostream>
#include <string.h>
using namespace std;
class Person
{
private:
    char name[20];
    int age;

public:
    void set_name(char str[])
    {
        strcpy(name, str);
    }
    void set_age(int age)
    {
        this->age = age;
    }
    string get_name()
    {
        return name;
    }
    int get_age()
    {
        return age;
    }
};
class Employee : public Person
{
private:
    char EmpId[20];
    int EmpSal;

public:
    void setEmpId(char EmpID[])
    {
        strcpy(EmpId, EmpID);
    }
    void setEmpSal(int EMpsAl)
    {
        EmpSal = EMpsAl;
    }
    string getEmpId()
    {
        return EmpId;
    }
    int getEmpSal()
    {
        return EmpSal;
    }
};
int main()
{
    // printf("\x1B[34mTexting\41[0m\t\t");
    cout << "\x1B[35m--------------------INSTRUCTIONS--------------------" << endl;
    cout << "1. Age must be Greater than 15 and less than 100" << endl;
    char str[20], ID[20];
    int age;
    int salary;
    Employee E;
    cout << "------------------------------------------" << endl;

    cout << "Enter name             :-  ";
    cin >> str;
    E.set_name(str);

    cout << endl
         << "Enter Age              :-  ";
    cin >> age;
    E.set_age(age);

    cout << endl
         << "Enter Employee Id      :-  ";
    cin >> ID;
    E.setEmpId(ID);

    cout << endl
         << "Enter Employee Salary  :-  ";
    cin >> salary;
    E.setEmpSal(salary);
    cout << endl
         << "******************************************" << endl;
    printf("\x1B[37m");
    cout << "Name       :-  " << E.get_name() << endl
         << endl;
    cout << "Age        :-  " << E.get_age() << endl
         << endl;
    cout << "ID No      :-  " << E.getEmpId() << endl
         << endl;
    cout << "Salary     :-  " << E.getEmpSal() << endl;
    printf("\x1B[35m");
    cout << endl
         << "------------------------------------------" << endl;
    return 0;
}
