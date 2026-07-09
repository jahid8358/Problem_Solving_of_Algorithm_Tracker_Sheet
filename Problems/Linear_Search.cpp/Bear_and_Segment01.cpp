#include <iostream>
#include <string>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i == 0 && s[i] == '1')
                count++;
            else if (i > 0 && (s[i] == '1' && s[i - 1] == '0'))
                count++;
        }
        if (count == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}