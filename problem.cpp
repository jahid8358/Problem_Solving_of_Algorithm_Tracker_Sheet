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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int maxh = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int current = min(v[i], v[i + 1]);
            maxh = max(current, maxh);
        }
        cout << maxh << endl;
    }
    return 0;
}