#include <stdio.h>

int main()
{
    FILE *f;
    char c;
    f = fopen("charac.txt", "r");
    while (c != EOF)
    {
        c = fgetc(f);
        printf("%c", c);
    }
    fclose(f);

    return 0;
}