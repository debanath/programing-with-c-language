#include <stdio.h>

void main()
{
    float x, y, z;  //amount of loan taken by ram, mohan, sohan respectively
    int r, p, q;    //rate of interest that ram, mohan, sohan have to give respectively
    int t1, t2, t3; //time period

    printf("Fill in the blanks in the respective order \n");
    printf("\nRam took a loan of __ rupees at an interst rate of __ and for __ year\n");
    scanf("%f %d %d", &x, &r, &t1);

    printf("\nMohan took a loan of __ rupees at an interst rate of __ and for __ year\n");
    scanf("%f %d %d", &y, &p, &t2);

    printf("\nSohan took a loan of __ rupees at an interst rate of __ and for __ year\n");
    scanf("%f %d %d", &z, &q, &t3);

    /*Using formula SI = PRT/100
    we'll find the SI that ram, mohan and sohan has to pay*/
    float a, b, c; // simple interest of x , y and z

    a = x * r * t1 / 100;
    b = y * p * t2 / 100;
    c = z * q * t3 / 100;

    a > b ? (a > c ? printf("\n\nRam paid the most amount\nHe'll pay Rs.%0.1f", a + x) : printf("\n\nSohan paid the Most\nHe'll pay Rs.%0.1f", c + z)) : (b > c ? printf("\n\nMohan paid the most\nHe'll pay Rs.%0.1f", b + y) : printf("\n\nSohan paid the most\nHe'll pay Rs.%0.1f", c + z));
}