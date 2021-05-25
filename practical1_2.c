#include <stdio.h>

void main()
{

    int a; //side of new cube
    int b; //side of cube
    printf("enter side of smaller cube and larger cube ");
    scanf("%d %d", &a, &b);

   
    int x, y; //volume of smaller and larger cube respectively

    x = b * b * b;
    y = a * a * a;

    int no_of_cubes;

    no_of_cubes = x / y;

    printf("No of Smaller cubes = %d", no_of_cubes);
}
