// read the data from employee.txt file and sort the age using counting sort and write the sorted data to emplos.txt file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee
{
    char name[20];
    int age;
    char address[20];
    char city[20];
    char state[20];
    int pincode;
    char phone[20];
    char email[20];
};

int main()
{
    struct employee e[100];
    int i, j, k, n, age[100], temp, count[100];
    FILE *fp;
    fp = fopen("employee.txt", "r");
    if (fp == NULL)
    {
        printf("File not found");
        exit(0);
    }
    i = 0;
    while (fscanf(fp, "%s %d %s %s %s %d %s %s", e[i].name, &e[i].age, e[i].address, e[i].city, e[i].state, &e[i].pincode, e[i].phone, e[i].email) != EOF)
    {
        i++;
    }
    n = i;
    for (i = 0; i < n; i++)
    {
        age[i] = e[i].age;
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (age[i] > age[j])
            {
                temp = age[i];
                age[i] = age[j];
                age[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        count[i] = 0;
        for (j = 0; j < n; j++)
        {
            if (age[i] == e[j].age)
            {
                count[i]++;
            }
        }
    }
    fp = fopen("emplos.txt", "w");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (age[i] == e[j].age)
            {
                fprintf(fp, "%s %d %s %s %s %d %s %s", e[j].name, e[j].age, e[j].address, e[j].city, e[j].state, e[j].pincode, e[j].phone, e[j].email);
            }
        }
    }
    fclose(fp);
    return 0;
}
