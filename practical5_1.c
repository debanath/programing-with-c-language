#include <stdio.h>
int main()
{
    int n;
    int p, q, r;
    int amount[3];
    printf("Enter the total number of persons-");
    scanf("%d", &n);
    printf("Amount of each person\n\n");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Amount of person%d-", i + 1);
        scanf("%d", &amount[i]);
    }
    printf("Enter ratio in which they are having coins-");
    scanf("%d %d %d", &p, &q, &r);
    int x = p + 2 * q + 4 * r;

    for (i = 0; i < n; i++)
    {
        int something = (4 * amount[i]) / x;
        printf("For person%d: ", i + 1);
        printf("\nNumber of 25 paise coin- %d", something * p);
        printf("\nNumber of 50 paise coin- %d", something * q);
        printf("\nNumber of 1 rupee coin- %d", something * r);
        printf("\n\n");
    }

    return 0;
}