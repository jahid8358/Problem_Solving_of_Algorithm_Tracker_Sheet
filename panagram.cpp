#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int flag = 0;

        for (int j = 0; j < s.length() / 2; j++)
        {
            if (s[j] != s[s.length() - j - 1])
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
            cout << "Case " << i + 1 << ": " << "Yes" << endl;
        else
            cout << "Case " << i + 1 << ": " << "No" << endl;
    }
    return 0;
}