// files

#include <stdio.h>

int main()
{
    FILE *f;
    int a[10] = {1, 2, 3, 4, 5, 6, 7};
    int b[10];
    f = fopen("hello.txt", "w");
    for (int i = 0; i < 7; i++)
    {
        fprintf(f, "%d\n", a[i]);
    }

    fclose(f);
    f = fopen("hello.txt", "r");

    for (int i = 0; i < 7; i++)
    {
        fscanf(f, "%d", &b[i]);
    }
    fclose(f);

    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", b[i]);
    }

    return 0;
}