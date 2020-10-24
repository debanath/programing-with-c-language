#include <stdio.h>

void main() {
    float x,y,z; //amount of loan taken by ram, mohan, sohan respectively
    int r,p,q; //rate of interest that ram, mohan, sohan have to give respectively
    int t1,t2,t3; //time period

    printf("Fill in the blanks in the respective order \n");
    printf("\nRam took a loan of __ rupees at an interst rate of __ and for __ year\n");
    scanf("%f %d %d",&x,&r,&t1);

    printf("\nMohan took a loan of __ rupees at an interst rate of __ and for __ year\n");
    scanf("%f %d %d",&y,&p,&t2);

    printf("\nSohan took a loan of __ rupees at an interst rate of __ and for __ year\n");
    scanf("%f %d %d",&z,&q,&t3);    
 

    /*Using formula SI = PRT/100
    we'll find the SI that ram, mohan and sohan has to pay*/
    float SIx,SIy,SIz;// simple interest of x , y and z

    SIx = x*r*t1/100;
    SIy = y*p*t2/100;
    SIz = z*q*t3/100;

 SIx>SIy?(SIx>SIz?printf("Ram paid the most amount"):printf("Sohan paid the Most")):(SIy>SIz?printf("Mohan paid the most") : printf("Sohan paid the most")) ; 
 
}