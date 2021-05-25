#include <stdio.h>
#include <string.h>

void main()
{
    //! Variables for day and month
    int mm; //! month
    int dd; //! day
            //! Input Month and Date
    printf("Enter the month(in numerical value) where the last day is Friday:");
    scanf("%d", &mm);

    printf("Enter the date whose day you wannna know:");
    scanf("%d", &dd);

    //! valiadtion of month
    if ((mm >= 1 && mm <= 12) && (dd >= 1 && dd <= 31))
    {
        //!  FOR FEB
        if (mm == 2)
        {
            //! check for leap year
            char YesOrNo[2];

            printf("Is it a leap year (y/n)");
            scanf("%s", YesOrNo);

            //! validation of y/n
            //TODO FEB WITH 29 DAYS
            if (!strcmp(YesOrNo, "y") || !strcmp(YesOrNo, "Y"))
            {

                if (dd % 7 == 1)
                {
                    printf("It is Friday!");
                }
                else if (dd % 7 == 2)
                {
                    printf("It is SaTurday!");
                }
                else if (dd % 7 == 3)
                {
                    printf("It is Sunday!");
                }
                else if (dd % 7 == 4)
                {
                    printf("It is Monday!");
                }
                else if (dd % 7 == 5)
                {
                    printf("It is Tuesday!");
                }
                else if (dd % 7 == 6)
                {
                    printf("It is Wednesday!");
                }
                else
                {
                    printf("It is Thursday!");
                }
            }
            //TODO FEB WITH 28 DAYS
            else if (!strcmp(YesOrNo, "n") || !strcmp(YesOrNo, "N"))
            {
                if (dd % 7 == 0)
                {
                    printf("It is Friday!");
                }
                else if (dd % 7 == 1)
                {
                    printf("It is SaTurday!");
                }
                else if (dd % 7 == 2)
                {
                    printf("It is Sunday!");
                }
                else if (dd % 7 == 3)
                {
                    printf("It is Monday!");
                }
                else if (dd % 7 == 4)
                {
                    printf("It is Tuesday!");
                }
                else if (dd % 7 == 5)
                {
                    printf("It is Wednesday!");
                }
                else
                {
                    printf("It is Thursday!");
                }
            }
            else
            {
                printf("Enter Y or N only");
            }
        }
        //! checking for other month
        //TODO MONTH WITH 30 DAYS
        else if ((mm <= 7 && mm % 2 == 0) || (mm > 7 && mm % 2 != 0))
        {
            if (dd % 7 == 2)
            {
                printf("It is Friday!");
            }
            else if (dd % 7 == 3)
            {
                printf("It is SaTurday!");
            }
            else if (dd % 7 == 4)
            {
                printf("It is Sunday!");
            }
            else if (dd % 7 == 5)
            {
                printf("It is Monday!");
            }
            else if (dd % 7 == 6)
            {
                printf("It is Tuesday!");
            }
            else if (dd % 7 == 0)
            {
                printf("It is Wednesday!");
            }
            else
            {
                printf("It is Thursday!");
            }
        }
        //TODO MONTH WITH 31 DAYS
        else
        {
            if (dd % 7 == 3)
            {
                printf("It is Friday!");
            }
            else if (dd % 7 == 4)
            {
                printf("It is SaTurday!");
            }
            else if (dd % 7 == 5)
            {
                printf("It is Sunday!");
            }
            else if (dd % 7 == 6)
            {
                printf("It is Monday!");
            }
            else if (dd % 7 == 0)
            {
                printf("It is Tuesday!");
            }
            else if (dd % 7 == 1)
            {
                printf("It is Wednesday!");
            }
            else
            {
                printf("It is Thursday!");
            }
        }
    }
    else
    {
        printf("Enter a Valid Month and Day");
    }
}