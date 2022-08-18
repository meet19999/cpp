#include<iostream>
using namespace std;
class bank
{
protected:
int acc_no;
public:
void set_acc(int accno)
{
    acc_no=accno;
}
int get_accno()
{
    return acc_no;
}
};
class savingaccount: public bank
{
    int bal,ammount;
    public:-   
};