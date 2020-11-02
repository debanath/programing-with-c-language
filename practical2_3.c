#include <stdio.h>

int main()
{

    int a;    //mothers age
    int m, n; // how you are kavi and his brother
    int kavi, bro;

    printf("Enter Mother's Age:");
    scanf("%d", &a);
    printf("How young is Kavi with respect to his mother:");
    scanf("%d", &m);
    printf("How young is Kavi's brother with respect to his mother:");
    scanf("%d", &n);

    kavi = a - m;
    bro = a - n;

    int diff_btn_both = kavi - bro;

    int broDOB;

    printf("Enter Kavi's Brother's DOB:");
    scanf("%d", &broDOB);

    if (broDOB >= 1900 && broDOB <= 2019)
    {

        int kaviDOB = broDOB - diff_btn_both;

        int brother_class;
        int kavi_class;

        printf("Enter in which class Kavi's Brother Study:");
        scanf("%d", &brother_class);

        kavi_class = brother_class + diff_btn_both;

        printf("\n\nKavi was born in: %d", kaviDOB);
        printf("\nKavi is in class: %d", kavi_class);

        return 0;
    }
    else
    {
        printf("\nEnter a Valid DOB of Kavi's Brother");
        return 0;
    }
}