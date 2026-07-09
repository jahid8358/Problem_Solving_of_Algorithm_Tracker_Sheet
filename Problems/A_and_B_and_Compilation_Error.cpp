#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int b[n - 1];
    int c[n - 2];

    int sum_a = 0;
    int sum_b = 0;
    int sum_c = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum_a += a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
        sum_b += b[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        cin >> c[i];
        sum_c += c[i];
    }
    int ans1 = sum_a - sum_b;
    int ans2 = sum_b - sum_c;

    cout << ans1 << " " << ans2 << endl;

    return 0;
}