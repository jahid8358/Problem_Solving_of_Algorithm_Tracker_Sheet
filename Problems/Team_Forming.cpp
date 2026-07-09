#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int count = 0;

    for (int i = n - 1; i >= 0; i -= 2)
        count += v[i] - v[i - 1];

    cout << count << endl;

    return 0;
}