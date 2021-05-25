#include <stdio.h>
void main()
{
    int N, n, m, x;
    float cp, sp, total_profit, total_loss;
    int ch;
    total_profit = 0;
    total_loss = 0;
    printf("Enter N :");
    scanf("%d", &N);
    printf("Enter details for %d items\n", N);
    while (N--)
    {
        printf("Enetr CP : ");
        scanf("%f", &cp);
        printf("Is it sold for P or L : Enter 1 for profit and 2 for loss : ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            printf("Enter m percent : ");
            scanf("%d", &m);
            total_profit = total_profit + ((cp * m) / 100);
        }
        else if (ch == 2)
        {
            printf("Enter n percent :");
            scanf("%d", &n);
            total_loss = total_loss + ((cp * n) / 100);
        }
    }
    printf("%0.2f    %0.2f\n", total_profit, total_loss);
    if (total_profit > total_loss)
    {
        printf("He is in profit and his net profit is %0.2f\n", total_profit - total_loss);
    }
    else
    {
        printf("He is in loss and his net loss is %0.2f", total_loss - total_profit);
    }
}
