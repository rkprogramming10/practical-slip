//random array quick sort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int partition(int number[], int first, int last)
{
    int pivot, i, j, temp;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (number[i] <= number[pivot] && i < last)
                i++;
            while (number[j] > number[pivot])
                j--;
            if (i < j)
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        partition(number, first, j - 1);
        partition(number, j + 1, last);
    }
    return 0;
}

int main()
{
    int i, n, number[30];
    srand(time(0));
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
        number[i] = rand() % 100;
    for (i = 0; i < n; ++i)
        printf("%d ", number[i]);
    partition(number, 0, n - 1);
    printf("\nThe numbers arranged in ascending order are given below: ");
    for (i = 0; i < n; ++i)
        printf("%d ", number[i]);
    return 0;
}

