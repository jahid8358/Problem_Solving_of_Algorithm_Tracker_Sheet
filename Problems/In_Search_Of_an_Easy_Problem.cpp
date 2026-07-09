#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != 0)
            flag++;
    }

    if (flag == 0)
        cout << "Easy" << endl;
    else
        cout << "Hard" << endl;

    return 0;
}