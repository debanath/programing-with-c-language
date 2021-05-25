#include <stdio.h>

void main()
{
    int p, i;

    printf("Enter the no: ");

    scanf("%d", &p);

    if (p > 999999)
    {
        printf("Not Possible");
    }
    else
    {
        for (i = 999999;; i--)
        {
            if (i % p == 0)
            {
                printf("%d is the greatest 6-digit no divisisble by %d\n", i, p);
                printf("%d is the smallest 7-digit no didvisible by %d\n", i + p, p);
                break;
            }
        }
    }
}