#include <iostream>
using namespace std;

void Selection_Sort(int a[], int n)
{
    int i, j, mindex;
    for (i = 0; i < n; i++)
    {
        mindex = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[mindex] > a[j])
                mindex = j;
        }
        if (mindex != i)
        {
            int temp = a[mindex];
            a[mindex] = a[i];
            a[i] = temp;
            // swap(a[mindex], a[i]);
        }
    }
}
void Printing(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Before Sorting:";
    Printing(a, n);

    Selection_Sort(a, n);

    cout << "After Selection Sort:";
    Printing(a, n);

    return 0;
}