#include <stdio.h>

void main()
{

    char name[25];
    int age;
    long long ph_no;
    float percent;

    printf("Enter your name in Block Letters \n");
    scanf("%[^\n]s", &name);

    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your contact number\n");
    scanf("%lld", &ph_no);

    printf("Percentage Obtained in Metric Class\n");
    scanf("%f", &percent);
    printf("\n\n\n");

    printf("*******************STUDENT DATABASE********************\n\n");
    printf("Name                : %s\n", name);
    printf("Age                 : %d\n", age);
    printf("Contact Number      : %lld\n", ph_no);
    printf("Percentage in Metric: %.2f\n", percent);
    printf("Thank you. Your data has been saved in our system\n\n");
    printf("*******************************************************");
}