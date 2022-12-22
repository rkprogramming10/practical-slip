// check palindrome character using stack

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "q2.h"

int main()
{
    char str[100];
    int i, len;
    printf("Enter the string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        push(str[i]);
    }
    for (i = 0; i < len; i++)
    {
        if (str[i] != pop())
        {
            printf("Not a palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;
}