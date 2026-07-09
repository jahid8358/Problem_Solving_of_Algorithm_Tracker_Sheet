#include <bits/stdc++.h>
using namespace std;
// main concept is to find minimum distance which can be found by go and come back from lowest number to higest number of distanced store
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int min = 1777;
        int max = -109;
        for (int i = 0; i < n; i++)
        {
            int a[n];
            cin >> a[i];
            if (a[i] >= max)
                max = a[i];
            if (a[i] < min)
                min = a[i];
        }
        int distance = max - min;
        int total_distance = 2 * distance;
        cout << total_distance << endl;
    }
    return 0;
}
