// selection sort random array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, a, n, number[30];
    srand(time(0));
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
        number[i] = rand() % 100;
    for (i = 0; i < n; ++i)
        printf("%d ", number[i]);
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below: ");
    for (i = 0; i < n; ++i)
        printf("%d ", number[i]);
    return 0;
}
