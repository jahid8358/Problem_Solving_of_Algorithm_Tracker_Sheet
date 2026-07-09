#include <iostream>
using namespace std;

int shorter(int a[], int n, int x)
{
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < x)
        {
            ans = a[i];
        }
        else
            return ans;
    }
    return ans;
}

int longer(int a[], int n, int x)
{
    int ans = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > x)
            ans = a[i];
        else
            return ans;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int x;
    cin >> x;
    while (x > 0)
    {
        int y;
        cin >> y;

        int s = shorter(a, n, y);
        int l = longer(a, n, y);

        if (s == -1)
            cout << "X ";
        else
            cout << s << " ";
        if (l == -1)
            cout << "X " << endl;
        else
            cout << l << endl;
        x--;
    }

    return 0;
}