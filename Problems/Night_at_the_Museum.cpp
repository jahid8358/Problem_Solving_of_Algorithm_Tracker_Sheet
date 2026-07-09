#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    int initial = 'a';

    for (int i = 0; i < s.length(); i++)
    {
        int difference = s[i] - initial;
        if (difference < 0)
            difference = difference * -1;
        else if (difference == 0)
            continue;

        if (difference < (26 - difference))
            count += difference;
        else
            count += 26 - difference;

        initial = s[i];
    }
    cout << count << endl;

    return 0;
}
