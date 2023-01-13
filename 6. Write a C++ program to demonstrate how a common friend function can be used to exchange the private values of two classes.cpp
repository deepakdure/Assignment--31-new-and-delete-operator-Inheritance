#include <iostream>
using namespace std;
class Deepak;
class Ravi
{
protected:
    int x;

public:
    Ravi()
    {
        x = 100;
    }
    void display()
    {
        cout << "Ravi  :-  " << x << endl;
    }
    friend void swap(Ravi *x, Deepak *y);
};
class Deepak
{
protected:
    int y;

public:
    Deepak()
    {
        y = 999;
    }
    void Display()
    {
        cout << "Deepak  :-  " << y << endl;
    }
    friend void swap(Ravi *x, Deepak *y);
};
void swap(Ravi *a, Deepak *b)
{
    int c;
    c = a->x;
    a->x = b->y;
    b->y = c;
}
int main()
{
    Ravi R;
    Deepak D;
    cout << "Before Swapping ---------- " << endl;
    R.display();
    D.Display();
    cout << "After Swapping ---------- " << endl;
    swap(&R, &D);
    R.display();
    D.Display();
    return 0;
}