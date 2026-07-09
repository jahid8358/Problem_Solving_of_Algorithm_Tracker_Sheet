#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int t = n;
        int r = 0;
        while (n > 0)
        {
            r = (r * 10) + n % 10;
            n /= 10;
        }
        if (t == r)
            cout << "Case " << i << ": Yes" << endl;
        else
            cout << "Case " << i << ": No" << endl;
    }
    return 0;
}
