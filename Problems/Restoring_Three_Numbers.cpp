#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(4);
    for (int i = 0; i < 4; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    int x = v[3] - v[0];
    int y = v[3] - v[1];
    int z = v[3] - v[2];

    cout << x << " " << y << " " << z;

    return 0;
}