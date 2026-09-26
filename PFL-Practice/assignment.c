#include <stdio.h>

int main()
{
    int T, L;
    int a[50];
    int i, j, temp;
    int swaps;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &L);

        for(i = 0; i < L; i++)
        {
            scanf("%d", &a[i]);
        }

        swaps = 0;

        for(i = 0; i < L - 1; i++)
        {
            for(j = 0; j < L - 1 - i; j++)
            {
                if(a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;

                    swaps++;
                }
            }
        }

        printf("%d\n", swaps);
    }

    return 0;
}
