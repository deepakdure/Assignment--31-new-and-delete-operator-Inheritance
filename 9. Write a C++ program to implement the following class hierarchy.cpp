#include <iostream>
#include <stdio.h>
using namespace std;
class Stuudent
{
    int id;
    char name[30];

public:
    void inputS()
    {
        cout << "\n**********************************************\n";
        cout << "Enter Your Id :- ";
        cin >> id;
        cout << "\nEnter Your Name :- ";
        cin >> name;
        cout << "\n**********************************************\n";
    }
    void outputS()
    {
        cout << "Id = " << id << endl;
        cout << "Name = " << name;
    }
};
class StudentExam : public Stuudent
{
public:
    int math, hindi, science, social_science, english, sanskrit;

public:
    void inputSE()
    {
        inputS();
        cout << "\nEnter Math Marks            :- ";
        cin >> math;
        cout << "\nEnter Math Hindi            :- ";
        cin >> hindi;
        cout << "\nEnter Science Marks         :- ";
        cin >> science;
        cout << "\nEnter Social Science Marks  :- ";
        cin >> social_science;
        cout << "\nEnter English Marks         :- ";
        cin >> english;
        cout << "\nEnter Sanskrit Marks        :- ";
        cin >> sanskrit;
    }
    void outputSE()
    {
        cout << "\nEnter Math Marks             :- " << math;
        cout << "\nEnter Hindi Marks            :- " << hindi;
        cout << "\nEnter Science Marks          :- " << science;
        cout << "\nEnter Social Science Marks   :- " << social_science;
        cout << "\nEnter English Marks          :- " << english;
        cout << "\nEnter Sanskrit Marks         :- " << sanskrit;
    }
};
class StudentResult : public StudentExam
{
    float percent;

public:
    void calcualte()
    {
        percent = (math + hindi + science + social_science + english + sanskrit) / 6.0;
        cout << "\n---------------------------------------------";
        cout << endl
             << "Total Percentage :- " << percent;
        cout << "\n---------------------------------------------";
    }
};
int main()
{
    StudentResult s1;
    int c, i;
    cout << "**********************************************";

    cout << "\nEnter No. of students :- ";
    cin >> c;
    for (i = 0; i < c; i++)
    {
        s1.inputSE();
        cout << "\n---------------------------------------------";
        cout << "\n---------------------------------------------";
        s1.outputSE();
        s1.calcualte();
    }
    cout << "\n**********************************************\n";
    return 0;
}