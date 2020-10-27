#include <stdio.h>
#include<math.h>

int main()
{
    int a,b; //time taken by a and time taken by b
    float anb; //time taken by a and b together

    printf("Time taken by A in days\n");
    scanf("%d", &a);

    printf("Time taken by B in days\n");
    scanf("%d", &b);

    anb=pow(a,-1)+pow(b,-1);
    anb = 1/anb;
    printf("A and B will do the same work in: %0.2f Days",anb);
    return 0;
}