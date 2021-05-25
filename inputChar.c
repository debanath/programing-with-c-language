#include <stdio.h>

void main()
{
    char a;

    printf("Enter an alphapet \n");
    scanf("%c", &a);

    char x[120];

    printf("enter a string \n");
    scanf("%s", &x);

    int y;

    printf("enter an integer \n");
    scanf("%d", &y);

    float z;

    printf("enter a float \n");
    scanf("%f", &z);

    printf("\n\nthe String is %s \n", x);
    printf("The alphabet is %c \n", a);
    printf("the int is %d \n", y);
    printf("the float is %.1f \n", z);
}