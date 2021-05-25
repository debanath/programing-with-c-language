#include <stdio.h>
#include <math.h>
void main()
{
    int N, rate;
    float temp, time, total_interest, p;
    rate = 5;
    temp = (1 + (rate / 100.0));
    total_interest = 0;
    printf("Enter N :");
    scanf("%d", &N);
    printf("Enter details for %d persons\n", N);
    while (N--)
    {
        printf("Enetr Principle Amount : ");
        scanf("%f", &p);
        printf("Enter Time : ");
        scanf("%f", &time);
        total_interest += p * (pow(temp, time));
    }
    printf("%0.2f is the total interest earned by bank", total_interest);
}
