#include <iostream>
#include <string.h>
using namespace std;
int count(string s)
{
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '8')
            c++;
    }
    return c;
}
int main()
{
    int n;
    cin >> n;
    string h;
    cin >> h;

    int total8 = count(h);

    if (total8 < h.size() / 11)
        cout << total8 << endl;
    else
        cout << h.size() / 11 << endl;

    return 0;
}