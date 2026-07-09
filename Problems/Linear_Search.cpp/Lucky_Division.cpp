#include <iostream>
using namespace std;

bool is_lucky(int n)
{
    while (n > 0)
    {
        if (n % 10 != 4 && n % 10 != 7)
            return false;
        n /= 10;
    }
    return true;
}

int main()
{

    int n;
    cin >> n;
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        if (is_lucky(i) && n % i == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}