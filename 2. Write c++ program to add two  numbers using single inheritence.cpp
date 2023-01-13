#include <iostream>
using namespace std;
class Base
{
protected:
    int x, y;

public:
    void accept(int a, int b)
    {
        x = a;
        y = b;
    }
};
class Derived : public Base
{
public:
    int display()
    {
        return x + y;
    }
};
int main()
{
    int x, y;
    Derived D;
    cout << "Enter 2 Numbers \n";
    cin >> x >> y;
    D.accept(x, y);
    cout << endl
         << "Sum of Two numbers is :- " << D.display() << endl
         << endl;
    return 0;
}