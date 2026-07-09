#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ldigit = n - 1;
    int ans = (n * n) + (ldigit * ldigit);
    cout << ans << endl;

    return 0;
}