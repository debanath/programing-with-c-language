#include <stdio.h>

void main()
{

    int a, b;
    printf("Enter the Value of a and b:");
    scanf("%d %d", &a, &b);

    printf("The value when we apply AND(a&b) operator to a and b we get= %d \n", a & b);
    printf("The value when we apply OR(a|b) operator to a and b we get= %d \n", a | b);
    printf("The value when we apply XOR(a^b) operator to a and b we get= %d \n", a ^ b);
    printf("The value when we apply leftShift(a<<b) operator to a and b we get= %d \n", a << b);
    printf("The value when we apply rightShift(a>>b) operator to a and b we get= %d \n", a >> b);
}
