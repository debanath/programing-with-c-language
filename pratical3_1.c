#include <stdio.h>
int main()
{
    int n, p, q, boys, bp, girls, gp, diff; 
    printf("Enter the total number of students in the class\n");
    scanf("%d", &n);
    printf("Enter the ratio of boys to girls in the class\n");
    scanf("%d %d", &p, &q);
    boys = n * p / (p + q);
    girls = n - boys;
    bp = (boys * 100 / n);
    gp = (girls * 100 / n);
    diff = boys - girls;
    printf("\nNumber of boys in the class= %d\nNumber of girls in the class= %d\n", boys, girls);
    printf("\nPercentage of boys in the class= %d\nPercentage of girls in the class= %d\n", bp, gp);
    printf("\nDifference between girls and boys in the class is %d\n", abs(diff));
    if (diff >= -5 && diff <= 5)
        printf("Equal Oppotunities of education are there for both boys and girls\n");
    else if (bp >= 70)
        printf("There is gender partiality in education as boys percentage is %d\n", bp);
    else if (gp >= 70)
        printf("Girls are dominating in education as girls percentage is %d\n", gp);
    else
        printf("There is no conclusion drawn from the given stats\n");
    return 0;
}