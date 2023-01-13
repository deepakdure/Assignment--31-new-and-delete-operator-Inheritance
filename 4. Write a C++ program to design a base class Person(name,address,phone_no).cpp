#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
     char name[30], address[100];
     long int phone_no;
};
class Employee : public Person
{
protected:
     int EmpNum;
};
class Manager : public Employee
{
public:
     char designation, department_name;
     long int salary;

public:
     void input()
     {
          cout << "\nEnter Details of Manager" << endl;
          cout << "----------------------------------------";
          cout << endl
               << "Enter Employee Name     :- ";
          cin >> name;
          cout << endl
               << "Enter Employee Address  :- ";
          cin >> address;
          cout << endl
               << "Enter Mobile Number      :- ";
          cin >> phone_no;
          cout << endl
               << "Enter Employee No        :- ";
          cin >> EmpNum;
          cout << endl
               << "Enter Designation     :- ";
          cin >> designation;
          cout << endl
               << "Enter Department      :- ";
          cin >> department_name;
          cout << endl
               << "Enter Salary          :- ";
          cin >> salary;
     }
};
int main()
{
     int i, count, temp = 0;
     cout << endl
          << "How Many Managers Yoy Want to Enter ? :- ";
     cin >> count;
     Manager M[20];
     for (i = 0; i < count; i++)
     {
          M[i].input();
     }
     for (i = 0; i < count; i++)
     {
          if (M[temp].salary < M[i].salary)
               temp = i;
     }
     cout << "\nManager with Highest Salary is :- " << M[temp].salary;
     cout << "\nManager Name is :- " << M[temp].name << endl;
     return 0;
}