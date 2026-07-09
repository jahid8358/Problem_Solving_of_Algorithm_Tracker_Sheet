#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long wait = 0;
        long long ctime = 0;

        for (int i = 0; i < n; i++)
        {
            if (ctime < a[i])
                ctime = a[i];
            else
                wait = wait + (ctime - a[i]);
        }
        cout << wait << endl;
    }
    return 0;
}