#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int search;
    cin >> search;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            cout << "Found" << endl;
            return 0;
        }
    }
    cout << "Not found" << endl;
    return 0;
}