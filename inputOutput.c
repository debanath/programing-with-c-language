//Write a C program to take an int, a float and a char input from user and print them on the screen.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("enter int \n");
    scanf("%d", &a);

    float b ;
    printf("enter float \n");
    scanf("%f",&b);
    
    char x;
    printf("enter char \n");
    scanf("%c",&x);

    printf("the int is %d \n",a);
    printf("the float is %0.1f \n",b);
    printf("the character is %c \n", x);
    return 0;
    
}