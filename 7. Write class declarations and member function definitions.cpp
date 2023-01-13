#include <iostream>
#include <stdio.h>
using namespace std;
class Employ
{
public:
    int empnum;
    char name[30];
    void get()
    {
        cout << "Enter Employ Number :- ";
        cin >> empnum;
        cout << "Enter Employ Name :- ";
        cin >> name;
    }
};
class FullTime : public Employ
{
    float daily_rate;
    int no_of_days;
    float salary;

public:
    void getData()
    {
        cout << "Enter daily rate :- ";
        cin >> daily_rate;
        cout << "Enter Num of Days :- ";
        cin >> no_of_days;
    }
    void cal()
    {
        salary = daily_rate * no_of_days;
        cout << "\nsalary :- " << salary << endl;
    }
    void show()
    {
        cout << "--------------------------------------" << endl;
        cout << "Emplou Number :- " << empnum << endl;
        cout << "Employ Name   :- " << name << endl;
        cout << "Salary        :- " << salary << endl;
        cout << "Status        :- FullTime" << endl;
        cout << "--------------------------------------" << endl;
    }
};
class PartTime : public Employ
{
    float total_working_hours;
    float hourly_rate;
    int salary1;

public:
    void get1()
    {
        cout << "Enter working hours :- ";
        cin >> total_working_hours;
        cout << "Enter Hourly Rate :- ";
        cin >> hourly_rate;
    }
    void calc()
    {
        salary1 = total_working_hours * hourly_rate;
        cout << "\nSalary :- " << salary1 << endl;
    }
    void display()
    {
        cout << "--------------------------------------" << endl;
        cout << "Emplou Number :- " << empnum << endl;
        cout << "Employ Name   :- " << name << endl;
        cout << "Salary        :- " << salary1 << endl;
        cout << "Status        :- PartTime" << endl;
        cout << "--------------------------------------" << endl;
    }
};
int main()
{
    int var1 = 0;
    int var2 = 0;
    FullTime f1[5];
    PartTime p1[5];

    int i, j;
    do
    {
        cout << "\n";
        cout << "\n1. Enter Record";
        cout << "\n2. Display Record";
        cout << "\n3. Search record";
        cout << "\n4. Exit";
        cout << "\n\nEnter Your Choice :- ";
        cin >> j;
        switch (j)
        {
        case 1:
            int y;
            cout << "\n1.FullTime Employ";
            cout << "\n2.HalfTime Employ\n";
            cout << "\n Enter : ";
            cin >> y;
            cout << endl;
            switch (y)
            {
            case 1:
                f1[var1].get();
                f1[var1].getData();
                f1[var1].cal();
                var1++;
                break;
            case 2:
                p1[var2].get();
                p1[var2].get1();
                p1[var2].calc();
                var2++;
                break;
            }
            break;
        case 2:
            for (i = 0; i < var1; i++)
            {
                f1[i].show();
            }
            for (i = 0; i < var2; i++)
            {
                p1[i].display();
            }
            break;
        case 3:
            int a;
            cout << "Enter Employ Number :- ";
            cin >> a;
            for (i = 0; i < var1; i++)
            {
                if (f1[i].empnum == 0)
                {
                    f1[i].show();
                }
                if (p1[i].empnum == 0)
                {
                    p1[i].display();
                }
            }
        }
    } while (j != 4);
    cout << endl;
    return 0;
}
