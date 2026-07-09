#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a <= b) // when lift is on my floor or upper floor
        {
            int second = 19 + (4 * b); // here 19 is total seconds to enter and exit
            cout << "Case " << i << ": " << second << endl;
        }
        else // when lift is under my floor
        {
            int tfloor = (a - b) + a;
            int second = 19 + tfloor * 4;
            cout << "Case " << i << ": " << second << endl;
        }
    }

    return 0;
}