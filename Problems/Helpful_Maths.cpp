#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int c[4] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
            c[s[i] - '0']++;
    }
    int flag = 1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 0; j < c[i]; j++)
        {
            if (flag == 0)
                cout << "+";
            cout << i;
            flag = 0;
        }
    }

    return 0;
}