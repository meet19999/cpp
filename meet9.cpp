#include<iostream>
using namespace std;
class con{
    int n;
    public:
    con()//defult
    {
        cout<<"\n Constructor called...";
    }
    con(int a)// perameterized
    {
        n=a;
        cout<<"\nConstructor Called..."<<n;
    }
};
int main()
{
    con c1(10),c2(20),c3(30);
}