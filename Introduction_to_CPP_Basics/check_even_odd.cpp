#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    if (x % 2 == 0)
    {
        if (x < 10)
            cout << "Even and less the 10" << endl;
        else
            cout << "Even and greater then equal 10" << endl;
    }
    else
        cout << "odd" << endl;
    return 0;
}