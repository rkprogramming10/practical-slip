// insertion sort using random array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, temp;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    printf("\nThe array is:");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("");

    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (temp < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    printf("\nThe sorted array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("");
    return 0;
}

// insertion sort using random array
