#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int d[n], v[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &d[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    int count = 0;
    int a[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            count++;
            a[count];
            a[count - 1] = d[i];
        }
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < (count - 1 - i); j++)
        {
            if (a[j] >= a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    if (count == 0)
    {
        printf("0\n");
        return 0;
    }

    for (int i = 0; i < count; i++)
        printf("%d ", a[i]);

    return 0;
}