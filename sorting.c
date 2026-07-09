#include <stdio.h>
int main()
{
    int price[5];

    for (int i = 0; i < 5; i++)
        scanf("%d", &price[i]);

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - 1; j++)
        {
            if (price[j] < price[j + 1])
            {
                int temp = price[j];
                price[j] = price[j + 1];
                price[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
        printf("%d", price[i]);

    return 0;
}