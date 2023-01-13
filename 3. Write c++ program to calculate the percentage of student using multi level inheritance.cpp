#include <iostream>
using namespace std;
class Accept
{
protected:
    int Hindi, English, Math, Science, Social_Science;
    float Percentage;

public:
    void get_data(int H, int E, int M, int S, int S_C)
    {
        Hindi = H;
        English = E;
        Math = M;
        Science = S;
        Social_Science = S_C;
    }
};
class Marks : public Accept
{
public:
    int Total_Marks()
    {
        int x = (Hindi + English + Math + Science + Social_Science);
        return x;
    }
};
class Calculate : public Marks
{
public:
    float Percentage()
    {
        float y = (Hindi + English + Math + Science + Social_Science);
        return (y / 5.00);
    }
    void display()
    {
        cout << "Total Marks       :-  " << Total_Marks() << endl;
        cout << "Total Percentage  :-  " << Percentage() << endl
             << endl;
    }
};
int main()
{
    int h, e, m, s, sc;
    Calculate C;
    cout << "Enter Your Marks in Hindi   :- ";
    cin >> h;
    cout << "Enter Your Marks in English :- ";
    cin >> e;
    cout << "Enter Your Marks in Math    :- ";
    cin >> m;
    cout << "Enter Your Marks in Science :- ";
    cin >> s;
    cout << "Enter Your Marks in S-Sc    :- ";
    cin >> sc;
    C.get_data(h, e, m, s, sc);
    cout << "\n-------------------------------------\n";
    C.display();
    return 0;
}
