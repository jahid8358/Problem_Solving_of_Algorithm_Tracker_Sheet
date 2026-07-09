#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int a = s1[i] - '0';
        int b = s2[i] - '0';

        int difference = a - b;
        if (difference < 0)
            difference = difference * -1;

        if (difference > (10 - difference))
            count += 10 - difference;
        else
            count += difference;
    }
    cout << count << endl;

    return 0;
}
