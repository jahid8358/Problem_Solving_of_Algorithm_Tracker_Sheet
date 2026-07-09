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
        int a[n];
        int max = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            if (max <= a[j])
                max = a[j];
        }
        cout << "Case " << i << ": " << max << endl;
    }
    return 0;
}