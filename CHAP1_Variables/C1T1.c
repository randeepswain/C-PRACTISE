#include <stdio.h>

int main()
{
    int a; // Variable declaration
    a = 1; // Variable intialisatiion
    printf("Value of variable a is %d\n", a);

    // This is a single line comment
    /* 
    This is a multi line comment 
    */
   int b;
   printf("Enter the value of b: ");
   scanf("%d",&b);                    // To take input from user
   printf("Value of b is %d\n",b);      // for printing something


   // escape sequence character
   printf("Hello world\n"); // No effect
   printf("Hello \nworld\n"); //world will print on next line
   printf("Hello\tworld\n"); // helloworld will print with one whitespace btw them
   printf("hello \\ world\n"); // this'\' will print between the words
   printf("hello \\\\ world\n"); // this'\\' will print between the words
   printf("\'Hello world\'\n"); // hello world will be enclosed within ''
   printf("\"Hello world\"\n"); // hello world will be enclosed within " "
    return 0;
}