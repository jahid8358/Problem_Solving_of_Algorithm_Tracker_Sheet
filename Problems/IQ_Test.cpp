#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int even = 0, odd = 0;
    int evindx = 0, odindx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 != 0)
        {
            odd++;
            odindx = i + 1;
        }

        else
        {
            even++;
            evindx = i + 1;
        }
    }
    if (even == 1)
        cout << evindx << endl;
    else
        cout << odindx << endl;

    return 0;
}