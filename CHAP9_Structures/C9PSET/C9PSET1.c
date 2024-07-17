// Write a function ‘sumVector’ which returns the sum of two vectors passed to it.**The vectors must be two–dimensional.

#include <stdio.h>

typedef struct vector
{
    int i;
    int j;
} v;

v sum_vector(v v1, v v2)
{
    v sum = {v1.i + v2.i, v1.j + v2.j};

    return sum;
}

int main()
{

    v v1 = {1, 2};
    v v2 = {2, 3};

    v v3 = sum_vector(v1, v2);
    printf(" the sum of vector is %di + %dj \n", v3.i, v3.j);
    return 0;
}