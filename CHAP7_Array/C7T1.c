// Arrays

#include <stdio.h>

int main()
{
    char a[11] = {"HELLOWORLd\n"}; // character array or string
    int b[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    float c[] = {30.4, 34.7}; // number of elements can also be left empty.

    printf("%d\n", *(b + 3)); // *(b+3) is simmilar to b[3]
    printf("%d\n", b[3]);     //

    printf("%s", a);

    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", b[i]);
    }

    return 0;
}