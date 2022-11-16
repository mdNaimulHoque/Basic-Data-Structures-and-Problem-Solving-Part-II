#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;

    if (a > b)
    {
        cout << "A is greater." << endl;
    }
    else if (a < b)
    {
        cout << "B is greater." << endl;
    }
    else
    {
        cout << "A is equal to B." << endl;
    }

    return 0;
}