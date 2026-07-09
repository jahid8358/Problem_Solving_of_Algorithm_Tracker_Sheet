#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long count = 0;

        while (n > 0)
        {
            if (k == 1)
            {
                count = n;
                break;
            }
            else if (n % k == 0)
            {
                count++;
                n /= k;
            }
            else
            {
                count += n % k;
                n -= n % k;
            }
        }
        cout << count << endl;
    }
    return 0;
}