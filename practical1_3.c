#include<stdio.h>

void main() {
    int x; //speed of car
    float a; //time delay
    int y; //percent faster
    int z; //total distance 

    printf("Enter the total distance between point A and B (in Km)\n");
    scanf("%d", &z);

    printf("How fast is the train w.rt the car (in percentage)\n");
    scanf("%d", &y);

    printf("Time Delayed by the train while stopping at the stations (in min)\n");
    scanf("%f", &a);


    x=(60*z*y)/(a*(100+y));

    printf("\n\nThe Speed of the Car is %d Kmph",x);


}
