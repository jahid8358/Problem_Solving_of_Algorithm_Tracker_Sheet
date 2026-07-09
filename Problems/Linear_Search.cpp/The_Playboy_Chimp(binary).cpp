#include <iostream>
using namespace std;

int find_small(int a[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    int result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] < x)
        {
            result = a[mid];
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return result;
}

int find_large(int a[], int n, int x)
{

    int low = 0;
    int high = n - 1;
    int result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] > x)
        {
            result = a[mid];
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;

        int smaller = find_small(a, n, x);
        int larger = find_large(a, n, x);

        if (smaller == -1)
            cout << "X ";
        else
            cout << smaller << " ";
        if (larger == -1)
            cout << "X " << endl;
        else
            cout << larger << endl;
    }

    return 0;
}
