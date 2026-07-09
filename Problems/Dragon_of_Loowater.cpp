#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    while (t == 0)
    {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0)
            return 0;

        vector<int> a(n);
        vector<int> b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int total = 0, j = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            for (; j < m; j++)
            {
                if (a[i] <= b[j])
                {
                    total += b[j];
                    count++;
                    j++;
                    break;
                }
            }
        }
        if (n > m || count < n)
            cout << "Loowater is doomed!" << endl;
        else
            cout << total << endl;
    }
    return 0;
}
