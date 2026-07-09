#include <iostream>
using namespace std;

int Binary_Search(int a[], int target, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == target)
            return 1;
        else if (target > a[mid])
            low = mid + 1;
        else if (target < a[mid])
            high = mid - 1;
    }
    return 6;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int target;
    cin >> target;

    int flag = Binary_Search(a, target, 0, n - 1);
    if (flag == 1)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}