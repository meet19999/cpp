#include <iostream>
using namespace std;

class bank
{
protected:
    int Acc_no;

public:
    void set_accno(int accnum)
    {
        Acc_no = accnum;
    }
    int get_accno()
    {
        return Acc_no;
    }
};

class savingAccount : public bank
{
    int bal, amt;

public:
    savingAccount(int amt)
    {
        bal = amt;
    }
    void Acc_number()
    {

        cout << "Your account no : " << Acc_no;
    }
    void dip(int amt)
    {

        bal += amt;
    }
    void with(int amt)
    {

        if (amt > bal)
        {
            cout << "sorry, not enough balance in your account ";
        }
        else
        {
            bal -= amt;
        }
    }

    int showbal()
    {
        return bal;
    }
};

int main()
{
    int n;
    int accnum;

    int diposit, withdral;

    cout << "Enter your Account no : ";
    cin >> accnum;
    savingAccount b1(1000);
    b1.set_accno(accnum);

    do
    {
        cout << "\n if you diposit amount Enter  : 1";
        cout << "\n if you withdral amount Enter  : 2";
        cout << "\n if you show balance amount Enter  : 9";
        cout << "\n if you Exit Enter  : 0";

        cout << "\n Enter n: ";
        cin >> n;

        switch (n)

        {
        case 0:

            break;
        case 1:
            cout << "Enter diposit amount : ";
            cin >> diposit;
            b1.dip(diposit);
            break;

        case 2:
            cout << "Your withdral amt : ";
            cin >> withdral;
            b1.with(withdral);
            break;
        case 9:
            b1.Acc_number();
            cout << "\n balance : " << b1.showbal();
            break;
        default:
            cout << "\n wrong choi";
            break;
        }
    } while (n != 0);
}