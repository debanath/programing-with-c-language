#include<stdio.h>

void main() {

    int a=1; //side of new cube
    int b=6; //side of cube

    int x,y; //volume of smaller and larger cube respectively

    x=b*b*b;
    y=a*a*a;

    int no_of_cubes;
    
    no_of_cubes = x/y;

    printf("No of Smaller cubes = %d",no_of_cubes);


}


