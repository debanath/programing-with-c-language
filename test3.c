#include <stdio.h>
#include <conio.h>

void main()
{
    int seat_civil = 0, seat_EEE = 0, seat_CSE = 0;

    while (seat_civil != 2 && seat_CSE != 2 && seat_EEE != 2)
    {
        int app_no;
        int phy_marks, chem_marks, maths_maths, percentage_in_12th, yearOfPassing12th, marksObtainedInBitsat;
        int choice;

        printf("\nEnter Your Application Number: ");
        scanf("%d", &app_no);

        printf("Year of Passing 12th: ");
        scanf("%d", &yearOfPassing12th);

        printf("Enter the Marks Obtained in the following subject in 12th:-\n");

        printf("PHYSICS: ");
        scanf("%d", &phy_marks);

        printf("CHEMISTRY: ");
        scanf("%d", &chem_marks);

        printf("MATHS: ");
        scanf("%d", &maths_maths);

        printf("Percentage In 12th: ");
        scanf("%d", &percentage_in_12th);

        printf("Marks obtained in the BITSAT examination: ");
        scanf("%d", &marksObtainedInBitsat);

        if (phy_marks >= 60 && chem_marks >= 60 && maths_maths >= 60 && percentage_in_12th >= 75 && marksObtainedInBitsat >= 240)
        {
            printf("You are eligible for admission\n Please choose Your preferred stream\n");
            printf("1. CIVIL\n2. EEE\n3.CSE\n");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                if (seat_civil != 2)
                {
                    printf("Application No. -%d\nYou have been assigned a seat in Civil engineering");
                    seat_civil++;
                }
                break;
            case 2:
                if (seat_EEE != 2)
                {
                    printf("Application No. -%d\nYou have been assigned a seat in EE engineering");
                    seat_EEE++;
                }
                break;
            case 3:
                if (seat_CSE != 2)
                {
                    printf("Application No. -%d\nYou have been assigned a seat in CS engineering");
                    seat_CSE++;
                }
                break;

            default:
                break;
            }
        }
    }
}