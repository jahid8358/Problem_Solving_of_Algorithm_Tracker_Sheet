#include <stdio.h>

struct item
{
    int quantity;
    int price;
};

int main()
{
    int n;
    scanf("%d", &n);

    struct item items[5000];

    for (int i = 0; i < n; i++)
        scanf("%d", &items[i].quantity);
    for (int i = 0; i < n; i++)
        scanf("%d", &items[i].price);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (items[j].price < items[j + 1].price)
            {
                // swap
                struct item temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }
    int box;
    scanf("%d", &box);
    int profit = 0;

    for (int i = 0; i < n; i++)
    {
        if (box == 0)
            break;
        else if (box >= items[i].quantity)
        {
            profit += items[i].quantity * items[i].price;
            box -= items[i].quantity;
        }
        else if (box < items[i].quantity)
        {
            profit = profit + box * items[i].price;
            box = 0;
        }
    }
    printf("%d\n", profit);

    return 0;
}
