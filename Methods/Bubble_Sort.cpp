#include <iostream>
using namespace std;

void Bubble_Sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int swap = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                a[j] = a[j] + a[j + 1];
                a[j + 1] = a[j] - a[j + 1];
                a[j] = a[j] - a[j + 1];
                // another swapping
                // swap(a[j],a[j+1]);
                swap = true;
            }
        }
        if (swap == false)
            break;
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

    Bubble_Sort(a, n);

    cout << "After Bubble Sort:";
    Printing(a, n);

    return 0;
}