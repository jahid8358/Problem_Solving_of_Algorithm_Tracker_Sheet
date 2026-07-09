#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct item
{
    int quantity;
    int price;
};

int main()
{
    int n;
    cin >> n;
    vector<item> items(n);

    for (int i = 0; i < n; i++)
        cin >> items[i].quantity;
    for (int i = 0; i < n; i++)
        cin >> items[i].price;

    int box;
    cin >> box;
    int m = box;
    sort(items.begin(), items.end(), [](item a, item b)
         { return a.price > b.price; });

    int profit = 0;

    for (int i = 0; i < m; i++)
    {
        if (box == 0)
            break;

        else if (box >= items[i].quantity)
        {
            profit += (items[i].quantity * items[i].price);
            box -= items[i].quantity;
        }
        else if (box < items[i].quantity)
        {
            profit += (items[i].price * box);
            box = 0;
        }
    }

    cout << profit << endl;

    return 0;
}