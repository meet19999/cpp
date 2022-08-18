#include <iostream>
using namespace std;
class bank
{
public:
    float bal;
    void deposit_ammount()
    {
        int d_amt;
        cout << "\n Enter deposite ammount";
        cin >> d_amt;
        bal += d_amt;
        cout << "\n total ammount is:----" << bal;
    }
    void withdraw_ammount()
    {
        int w_amt;
        cout << "\nEnter Withdrow Ammount:--- ";
        cin >> w_amt;
        if (w_amt > bal)
        {
            cout << "\n --:You Want able to Withdrow:--";
        }
        else
        {
            bal -= w_amt;
        }
    }
    void display()
    {
        cout << "\nTtal ammount is:---" << bal;
    }
};
int main()
{
    bank b;
    
    b.deposit_ammount();
    b.withdraw_ammount();
    b.display();
}
