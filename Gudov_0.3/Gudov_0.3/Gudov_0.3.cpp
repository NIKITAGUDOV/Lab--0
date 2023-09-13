#include <iostream>
using namespace std;

void main()
{
    cout << "Hello World!\n";
    cout << "Enter your symbols\n";
    cout << "If you want ot stop program enter !\n";
    char ans;
    while (cin >> ans)
    {
        if (ans != '!')
            cout << "your symbol is " << ans << "\n";
        else
        {
            cout << "Good bye!";
            break;
        }
    }
    

}