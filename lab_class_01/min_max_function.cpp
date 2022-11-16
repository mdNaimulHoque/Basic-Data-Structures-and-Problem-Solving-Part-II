#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 500, c = 250;
    int mn, mx;
    // mn = min(a, min(b, c));

    // cout << mn << endl;

    int ara[5] = {5, 2, 3, 1, 4};
    mn = ara[0];
    for (int i = 1; i < 5; i++)
    {
        /*if (ara[i] < mn)
            mn = ara[i];*/
        mn = min(mn, ara[i]);
        cout << "index- " << i << "-> " << mn << endl;
    }

    cout << mn << endl;

    return 0;
}