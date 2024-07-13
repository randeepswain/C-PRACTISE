// Write a program to determine whether a character entered by the user is lowercase or not.

#include <stdio.h>

int main()
{
    char a;

    printf("Enter the character: ");
    scanf("%c", &a);

    if (a >= 97 && a <= 122){
        printf("%c is lowercase character", a);
    }
    else{
        printf("%c is not lowercase character", a);
    }
    return 0;
}