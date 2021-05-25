#include <stdio.h>
void main()
{
    int x, y, z, i, t, c = 0;
    printf("Enter starting no , Last No and Digit you want to count :\n ");
    scanf("%d %d %d", &x, &y, &z);
    for (i = x; i <= y; i++)
    {
        t = i;
        while (t)
        {
            if (z == (t % 10))
                c++;
            t /= 10;
        }
    }
    printf("Repetition of %d is : %d times", z, c);
}
