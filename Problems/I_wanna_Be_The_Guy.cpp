#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> myset;

    int n;
    cin >> n;
    int x, y;

    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int a;
        cin >> a;
        myset.insert(a);
    }
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int a;
        cin >> a;
        myset.insert(a);
    }

    int s = myset.size();
    if (s < n)
        cout << "Oh, my keyboard!" << endl;
    else
        cout
            << "I become the guy." << endl;
    return 0;
}