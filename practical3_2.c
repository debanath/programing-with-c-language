#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int choice, num, i;
    while (1)
    {
        printf("1. Even odd \n");
        printf("2. Positive negetive\n");
        printf("3. Square of a number\n");
        printf("4. Squareroot of a number\n");
        printf("5. Exit\n\n\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter number:\n");
            scanf("%d", &num);
            if (num % 2 == 0)
                printf("\n\n%d is an Even number\n\n", num);
            else
                printf("\n\n%d is an Odd number\n\n", num);
            break;
        case 2:
            printf("Enter number:\n");
            scanf("%d", &num);
            if (num > 0)
                printf("\nnumber is positive number\n\n");
            else
                printf("\nnumber is negetive number\n\n");
            break;
        case 3:
            printf("Enter number:\n");
            scanf("%d", &num);
            printf("Square of a number is %d", num * num);
            break;
        case 4:
            printf("Enter number:\n");
            scanf("%d", &num);
            printf("Square root of a number is %d", sqrt(num));
            break;
        case 5:
            exit(0);
        }
    }
    return 0;
}
