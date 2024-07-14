#include <stdio.h>

int main()
{
    int a;
    int *ptr;
    ptr = &a;
    int **ptr1;
    ptr1 = &ptr;

    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *ptr);
    printf("The value of a is %d\n", *(&a));

    printf("The address of a is %p\n", ptr);
    printf("The address of a is %p\n", *(&ptr));
    printf("The address of a is %p\n", &a);

    printf("The address of ptr is %p\n", &ptr);
    printf("The address of ptr is %p\n", ptr1);

    printf("The value of ptr is %p\n", *ptr1);
    printf("The value of ptr is %p\n", ptr);

    return 0;
}