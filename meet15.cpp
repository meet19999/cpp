#include <iostream>
using namespace std;
class skill
{
    int fees,n;
    public:
    skill(int);
    void deposite(int);
    int showfees();
};
skill::skill(int amt)
{
    fees = amt;
}
void skill::deposite(int amt)
{
    fees += amt;
}
int skill::showfees()
{   
    return fees;
}
int main()
{
    string name;
    int age, z, x, y;
    int dep,n;
    int case1=10000,case2=12000,case3=20000,case4=22000,case5=30000,case6=34000;
    float mobile;
    cout << "\n enter your age :";
    cin >> age;
    if (age > 18 && 30 > age)
    {
        cout << "\nenter your name :";
        cin >> name;
        cout << "ok so";
        cout << "\nenter your mobile number :";
        cin >> mobile;
        cout << "Hii " << name;
        cout << "\n\tcourse is ";
        cout << "\n\tyou can lern c tap to 1";
        cout << "\n\tyou can lern c++ tap to 2";
        cout << "\n\tyou can lern java tap to 3";
        cout << "\n\tyou can lern c and c++ tap to 4";
        cout << "\n\tyou can lern c and java tap to 5";
        cout << "\n\tyou can lern c++ and java tap to 6";
        cout << "\n\tenter the number :";
        cin >> z;
        switch (z)
        {
            case 1:
                cout << "\n\n\t\tin c";
                cout << "\n2 month course";
                cout << "\nfees "<<case1;
                cout << "\nyour time is 8:00am to 10:00am";
            break;
            case 2:
                cout << "\n\n\t\tin c++";
                cout << "\n2 month course";
                cout << "\nfees "<<case2;
                cout << "\nyour time is 10:00am to 12:00pm";
            break;
            case 3:
                cout << "\n\n\t\tin java";
                cout << "\n4 month course";
                cout << "\nfees "<<case3;
                cout << "\nyour time is 12:00pm to 2:00pm";
                cout << "\n\n\t\t**  now how you can pay  **";
                cout << "\nemi amd rokda";
                cout << "\nemi tap 1";
                cout << "\nrokda tap 2";
                cout << "\nenter the number from how you can pay :";
                cin >> x;
                switch (x)
                {
                    case 1:
                    {
                        cout << "\n\nyou can pay 1 month 5000$";
                        skill me1(0/20000);
                        cout<<"\n your fees : "<<me1.showfees();
                        cout<<"/"<<case3;
                        do{
                            cout<<"\n Enter 1 for Deposite ";
                            cout<<"\n Enter 2 for Show fees ";
                            cout<<"\n Enter 0 for Exit ";
                            cout<<"\n Enter your choice : ";
                            cin>>n;
                            switch(n)
                            {
                                case 1:
                                    cout<<"\n Enter Deposite : ";
                                    cin>>dep;
                                    if (dep>0&&dep<20001)
                                    {
                                        me1.deposite(dep);
                                        cout<<"\nNow your fees : "<<me1.showfees();
                                        cout<<"/"<<case3;
                                    }
                                    else
                                    {
                                        cout<<"can't access";
                                    }
                                break;
                                case 2:
                                    cout<<"\n Show fees : "<<me1.showfees(); 
                                break;
                                case 0:
                                    cout<<"\n Exit ";
                                    return 0;
                                break;
                                default:
                                    cout<<"\n Envalid choice ";
                            }
                        n++;
                        }while(n<=10);
                    }
                    break;
                    case 2:
                        cout << "\n\nthankyou for giving rokda";
                    break;
                    default:
                       cout << "can't allowed";
                       }
            break;
        case 4:
            cout << "\n\n\t\tin c and c++";
            cout << "\n4 month course";
            cout << "\nfees "<<case4;
            cout << "\nyour time is 2:00pm to 4:00pm";
            cout << "\n\n\t\t**  now how you can pay  **";
            cout << "\nemi amd rokda";
            cout << "\nemi tap 1";
            cout << "\nrokda tap 2";
            cout << "\nenter the number from how you can pay :";
            cin >> x;
            switch (x)
            {
                case 1:
                {
                    cout << "\n\nyou can pay 1 month 5500$";
                    skill me1(0/22000);
                    cout<<"\n fees : "<<me1.showfees();
                    cout<<"/"<<case4;
                    do{
                        cout<<"\n Enter 1 for Deposite ";
                        cout<<"\n Enter 2 for Show fees ";
                        cout<<"\n Enter 0 for Exit ";
                        cout<<"\n Enter your choice : ";
                        cin>>n;
                        switch(n)
                        {
                            case 1:
                                cout<<"\n Enter Deposite : ";
                                cin>>dep;
                                if (dep>0&&dep<22001)
                                {
                                    me1.deposite(dep);
                                    cout<<"\nNow your fees : "<<me1.showfees();
                                    cout<<"/"<<case4;
                                }
                                else
                                {
                                    cout<<"can't access";
                                }
                            break;
                            case 2:
                                cout<<"\n Show fees : "<<me1.showfees();
                                break;
                            case 0:
                                cout<<"\n Exit ";
                                return 0;
                            break;
                            default:
                                cout<<"\n Envalid choice ";
                        }
                        n++;
                    }while(n<=10);
                }
                break;
                case 2:
                    cout << "\n\nthankyou for giving rokda";
                    break;
                default:
                    cout << "can't allowed";
            }
        break;
        case 5:
            cout << "\n\n\t\t**  in c and java  **";
            cout << "\n5 month course";
            cout << "\nfees "<<case5;
            cout << "\nyour time is 4:00pm to 6:00pm";
            cout << "\n\n\t\t**  now how you can pay  **";
            cout << "\nemi amd rokda";
            cout << "\nemi tap 1";
            cout << "\nrokda tap 2";
            cout << "\nenter the number :";
            cin >> x;
            switch (x)
            {
                case 1:
                {
                    cout << "\n\nyou can pay 1 month 6000";
                    skill me1(0/30000);
                    cout<<"\n fees : "<<me1.showfees();
                    cout<<"/"<<case5;
                    do{
                        cout<<"\n Enter 1 for Deposite ";
                        cout<<"\n Enter 2 for Show fees ";
                        cout<<"\n Enter 0 for Exit ";
                        cout<<"\n Enter your choice : ";
                        cin>>n;
                        switch(n)
                        {
                            case 1:
                                cout<<"\n Enter Deposite : ";
                                cin>>dep;
                                if (dep>0&&dep<30001)
                                {
                                    me1.deposite(dep);
                                    cout<<"\nNow your fees : "<<me1.showfees();
                                    cout<<"/"<<case5;
                                }
                                else
                                {
                                    cout<<"can't access";
                                }
                            break;
                            case 2:
                                cout<<"\n Show fees : "<<me1.showfees(); 
                                break;
                            case 0:
                                cout<<"\n Exit ";
                                return 0;
                            break;
                            default:
                                cout<<"\n Envalid choice ";
                        }
                        n++;
                    }while(n<=10);
                }
                break;
                    case 2:
                        cout << "\n\nthankyou for giving rokda";
                    break;
                    default:
                        cout << "can't allowed";
            }
        break;
        case 6:
        {
            cout << "\n\n\t\t**  in c++ and java  **";
            cout << "\n5 month course";
            cout << "\nfees "<<case6;
            cout << "\nyour time is 6:00pm to 8:00pm";
            cout << "\n\n\t\t**  now how you can pay  **";
            cout << "\nemi amd rokda";
            cout << "\nemi tap 1";
            cout << "\nrokda tap 2";
            cout << "\nenter the number :";
            cin >> x;
            switch (x)
            {
                case 1:
                {
                    cout << "\n\nyou can pay 1 month 6800$";
                    skill me1(0/34000);
                    cout<<"\n fees : "<<me1.showfees();
                    cout<<"/"<<case6;
                    do{
                        cout<<"\n Enter 1 for Deposite ";
                        cout<<"\n Enter 2 for Show fees ";
                        cout<<"\n Enter 0 for Exit ";
                        cout<<"\n Enter your choice : ";
                        cin>>n;
                        switch(n)
                        {
                            case 1:
                                cout<<"\n Enter Deposite : ";
                                cin>>dep;
                                if (dep>0&&dep<34001)
                                {
                                    me1.deposite(dep);
                                    cout<<"\nNow your fees : "<<me1.showfees();
                                    cout<<"/"<<case6;
                                }
                                else
                                {
                                    cout<<"can't access";
                                }
                            break;
                            case 2:
                                cout<<"\n Show fees : "<<me1.showfees(); 
                                break;
                            case 0:
                                cout<<"\n Exit ";
                                return 0;
                            break;
                            default:
                                cout<<"\n Envalid choice ";
                        }
                        n++;
                    }while(n<=10);
                }
                break;
                case 2:
                    cout << "\n\nthankyou for giving rokda";
                break;
                default:
                    cout << "can't allowed";
            
            }
        }
    }
    }
    else if (age < 18 && 30 < age)
    {
        cout << "not allowed";
    }
}                                                                        
