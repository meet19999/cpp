#include <iostream>
using namespace std;
class school
{
    int a, b, c, d, e,pr;

public:
    void get()
    {
        cout << "Enter the marks of maths:-";
        cin>>a;
        cout << "Enter the marks of gujarati:-";
        cin>>b;
        cout << "Enter the marks of social science:-";
        cin>>c;
        cout << "Enter the marks of science:-";
        cin>>d;
        cout << "Enter the marks of english:-";
        cin>>e;
    }

    void set()
    {
        cout << "\n"
             << a;
        cout << "\n"
             << b;
        cout << "\n"
             << c;
        cout << "\n"
             << d;
        cout << "\n"
             << e;
        cout << "\nTotal:-"
             << a + b + c + d + e;
        cout << "\nPersantage:-"
             << (a + b + c + d + e) total/ 5;
    }
};

int main()
{
    school s;

    s.get();
    s.set();
}