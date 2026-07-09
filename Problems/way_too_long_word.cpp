#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s.length() <= 10)
            cout << s << endl;
        else
        {
            int l = s.length() - 2;
            cout << s[0] << l << s[s.length() - 1] << endl;
        }
    }
    return 0;
}