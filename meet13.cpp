#include <iostream>
using namespace std;
class skill
{
public:
    string name;
    int age, z, x, y;
    float mobile;
    course();
};
skill::course()
{
    cout << "\n enter your age :";
    cin >> age;

    if (age > 18 && 30 > age)
    {
        cout << "\n\2\3\4\5enter your name :";
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
            cout << "\n1 month course";
            cout << "\nfees 5000";
            cout << "\nyour time is 8:00am to 10:00am";
            break;
        case 2:
            cout << "\n\n\t\tin c++";
            cout << "\n1 month course";
            cout << "\nfees 5000";
            cout << "\nyour time is 10:00am to 12:00pm";
            break;
        case 3:
            cout << "\n\n\t\tin java";
            cout << "\n2 month course";
            cout << "\nfees 10000";
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
                cout << "\n\nyou can pay 1 month 5000$";
                break;
            case 2:
                cout << "\n\nTnx for giving rokda";
                break;
            default:
                cout << "can't allowed";
            }
        case 4:
            cout << "\n\n\t\t**  in c and c++  **";
            cout << "\n2 month course";
            cout << "\nfees 10000";
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
                cout << "\n\nyou can pay 1 month 5000$";
                break;
            case 2:
                cout << "\n\nTnx for giving rokda";
                break;
            default:
                cout << "can't allowed";
            }
            break;
        case 5:
            cout << "\n\n\t\t**  in c and java  **";
            cout << "\n3 month course";
            cout << "\nfees 15000";
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
                cout << "\n\nyou can pay 1 month 5000$";
                break;
            case 2:
                cout << "\n\nTnx for giving rokda";
                break;
            default:
                cout << "can't allowed";
            }
            break;
        case 6:
            cout << "\n\n\t\t**  in c++ and java  **";
            cout << "\n3 month course";
            cout << "\nfees 15000";
            cout << "\nyour time is 6:00pm to 8:00pm";
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
                cout << "\n\nyou can pay 1 month 5000$";
                break;
            case 2:
                cout << "\n\nTnx for giving rokda";
                break;
            }
            break;
        default:
            cout << "can't allowed";
        }
    }
    else if (age < 18 && 30 < age)
    {
        cout << "not allowed";
    }
}
int main()
{
    skill sk;
    sk.course();
}