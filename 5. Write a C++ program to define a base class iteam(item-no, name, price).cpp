#include <iostream>
using namespace std;
class Iteam
{
public:
    int item_no;
    double price;
    char name[40];
};
class Discount_Iteam : public Iteam
{
public:
    float discount_percent;
    double discount_price;

    double discount()
    {
        double x;
        x = (price * discount_percent) / 100.0;
        discount_price = price - x;
        return discount_price;
    }
    void input()
    {
        cout << "\n------------------------------------";
        cout << "\nEnter Iteam No          :-  ";
        cin >> item_no;
        cout << "\nEnter Iteam Name        :-  ";
        cin >> name;
        cout << "\nEnter Iteam Price       :-  ";
        cin >> price;
        cout << "\nEnter Discount Percent  :-  ";
        cin >> discount_percent;
    }

    void display()
    {
        cout << "\n------------------------------";
        cout << "\nIteam No          :-  " << item_no;
        cout << "\nIteam Nane        :-  " << name;
        cout << "\nIteam Price       :-  " << price;
        cout << "\nDiscount Percent  :-  " << discount_percent;
        cout << "\nDiscount Price    :-  " << discount();
    }
};
int main()
{
    int i, count;
    double total = 0, discount = 0;
    cout << "How Many Itens You Want To Enter? :- ";
    cin >> count;
    Discount_Iteam D[10];
    for (i = 0; i < count; i++)
    {
        D[i].input();
    }
    for (i = 0; i < count; i++)
    {
        D[i].display();
        total = total + D[i].price;
        discount = discount + ((D[i].price * D[i].discount_percent) / 100.00);
    }
    cout << "\n------------------------------" << endl;
    cout << "Total Price     :-  " << total << endl;
    cout << "Total Discount  :-  " << discount << endl
         << endl;
    return 0;
}