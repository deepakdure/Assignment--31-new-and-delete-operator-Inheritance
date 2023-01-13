#include <iostream>
#include <stdio.h>
using namespace std;
class Customer
{
    char name[20];
    long long phnu;

public:
    void acceptC()
    {
        cout << "\nEnter the costomer name :- ";
        cin >> name;
        cout << "\nEnter the Phone Number :- ";
        cin >> phnu;
    }
    void dispc()
    {
        cout << "\nDetails of the customers ";
        cout << "\n-------------------------------------\n";
        cout << "Customer Name          :- " << name;
        cout << "\nCustomer Mobile Number :- " << phnu;
        cout << "\n-------------------------------------";
    }
};
class Deposit : public Customer
{
    int acc_no, blnc;

public:
    void accepD()
    {
        cout << "\nEnter Account Number :- ";
        cin >> acc_no;
        cout << "\nEnter Balance :- ";
        cin >> blnc;
    }
    void dispd()
    {
        // cout << "\nDetails of the customers \n";
        cout << "\n-------------------------------------\n";
        cout << "Customer Account Number :- " << acc_no;
        cout << "\nCustomer balance        :- " << blnc;
        cout << "\n-------------------------------------";
    }
};
class Borrow : public Deposit
{
    int loan_no, loan_amount;

public:
    void acceptB()
    {
        cout << "\nEnter Loan Number :- ";
        cin >> loan_no;
        cout << "\nEnter Loan Amount :- ";
        cin >> loan_amount;
    }
    void dispB()
    {
        // cout << "\nDetails of the customers \n";
        cout << "\n-------------------------------------\n";
        cout << "Customer Loan Number :- " << loan_no;
        cout << "\nCustomer Loan Amount :- " << loan_amount;
        cout << "\n-------------------------------------";
    }
};
int main()
{
    Borrow *b1;
    int n, i;
    cout << "\nEnter Number of Customer details you want  :-  ";
    cin >> n;
    b1 = new Borrow[n];
    for (i = 0; i < n; i++)
    {
        b1[i].acceptC();
        b1[i].accepD();
        b1[i].acceptB();
    }
    for (i = 0; i < n; i++)
    {
        b1[i].dispc();
        b1[i].dispd();
        b1[i].dispB();
    }
    return 0;
}