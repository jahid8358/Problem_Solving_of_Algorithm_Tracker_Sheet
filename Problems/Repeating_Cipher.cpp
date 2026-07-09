#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, ex = 1;
    while (i < n)
    {
        cout << s[i];
        i += ex;
        ex++;
    }
    cout << endl;
    return 0;
}