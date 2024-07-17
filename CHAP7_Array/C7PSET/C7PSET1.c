// Write a program containing a function which reverses the array passed to it.

#include <stdio.h>

void rev(int *a, int *b, int n)
{

    for (int i = 0; i < n; i++)
    {
        b[i] = a[n - 1 - i];
    }
}

int main()
{
    int n;
    printf("Enter number of array elements\n");
    scanf("%d", &n);
    int a[n];
    int b[n];
    printf("Enter array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    rev(a, b, n);
    printf(" array elements in reverse\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", b[i]);
    }

    return 0;
}