#include <iostream>
#include <string.h>
using namespace std;
class Worker
{
protected:
    int code;
    char name[50];
    float salary;

public:
    Worker()
    {
    }
    Worker(int c, char *n, float s)
    {
        code = c;
        strcpy(name, n);
        salary = s;
    }
    void outputW()
    {
        cout << endl
             << "Code            :- " << code << endl;
        cout << "Name            :- " << name << endl;
        cout << "Salary          :- " << salary << endl;
    }
};
class Officer
{
protected:
    float DA, HRA;

public:
    Officer() {}
    Officer(float d, float h)
    {
        DA = d;
        HRA = h;
    }
    void outputO()
    {
        cout << "\nCode            :- " << DA << endl;
        cout << "Name            :- " << HRA;
    }
};
class Manager : public Worker, public Officer
{
    float TA, Gross_Salary;

public:
    Manager() {}
    Manager(int c, char *n, float s, float d, float h) : Worker(c, n, s), Officer(d, h)
    {
    }
    void outputM()
    {
        outputO();
        outputW();
        TA = 0.10 * salary;
        cout << "TA              :- " << TA;
        Gross_Salary = DA + HRA + TA + salary;
        cout << "\nGross Salary    :- " << Gross_Salary << endl;
        cout << "---------------------------------------" << endl;
    }
};
int main()
{
    int cnt, i;
    cout << "Enter Manager Count :- ";
    cin >> cnt;
    Manager *m;
    m = new Manager[cnt];
    for (i = 0; i < cnt; i++)
    {
        cout << "\nEnter Workers Information for " << i + 1;
        cout << "\n---------------------------------------";
        cout << "\nEnter Code   :- ";
        int c;
        cin >> c;
        cout << "\nEnter name   :- ";
        char n[50];
        cin >> n;
        cout << "\nEnter Salary :- ";
        float s;
        cin >> s;
        cout << "\nEnter DA     :- ";
        float da;
        cin >> da;
        cout << "\nEnter HRA    :- ";
        float hra;
        cin >> hra;
        m[i] = Manager(c, n, s, da, hra);
    }
    for (i = 0; i < cnt; i++)
    {
        cout << "\n---------------------------------------";
        cout << "\nManager Information ";
        cout << "\n---------------------------------------";
        m[i].outputM();
    }
    return 0;
}