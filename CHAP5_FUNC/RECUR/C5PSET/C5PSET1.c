/// Write a program using recursion to calculate nth element of Fibonacci series

#include <stdio.h>

int fibonacci(int);

int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else if (n > 2)
    {
        return fibonacci(n - 2) + fibonacci(n - 1);
    }
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("%dth term of fibonacci series is: %d",num,fibonacci(num));
    return 0;
}