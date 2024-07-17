// swap of 2 variables

#include <stdio.h>

void swap(int *, int *);

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i = 4, j = 5;
    printf("Value of i is %d and j is %d\n", i, j);
    swap(&i, &j); // pass by reference
    printf("Value of i is %d and j is %d", i, j);

    return 0;
}