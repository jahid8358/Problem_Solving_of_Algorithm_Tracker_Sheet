#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int s = 2 * k - n; // need to find mathmatically
    long long max = a[n - 1];
    int left = 0;
    int right = n - s - 1; // need to find mathematically
    while (left < right)
    {
        if ((a[left] + a[right] > max))
            max = a[left] + a[right];
        left++;
        right--;
    }
    cout << max << endl;
    return 0;
}