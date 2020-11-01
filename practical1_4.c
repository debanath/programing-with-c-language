#include <stdio.h>

void main()
{

    int m, n, total_number_of_students;

    printf("Ranking From Top: ");
    scanf("%d", &m);

    printf("Ranking From Bottom: ");
    scanf("%d", &n);

    total_number_of_students = m + n - 1;

    printf("Total No of Students = %d", total_number_of_students);
}
