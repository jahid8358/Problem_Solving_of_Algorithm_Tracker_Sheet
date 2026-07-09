#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swap(b[j], b[j + 1]);
            }
        }
    }
    int total = 1;
    for (int i = 1; i < n; i++)
    {
        total = total + (a[i] * i) + 1;
    }
    cout << total << endl;
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    return 0;
}