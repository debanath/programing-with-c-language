#include<stdio.h>

int main() {
    char x;

        printf("enter an alphabet \n");
        scanf("%c", &x);

    int y;

        printf("enter an integer \n");
        scanf("%d", &y);

    float z;

        printf("enter a float \n");
        scanf("%f", &z);

    printf("the alphabet is %c \n", x);
    printf("the int is %d \n", y);
    printf("the float is %1.1f \n", z);

    return 0 ;

};