#include <stdio.h>

int main()
{
    int a = 1, b = 2, n;
    // Simple If

    if (a == 1)
    {
        printf("Statement\n");
    }

    // IF ELSE
    if (a == 1)
    {
        printf("statement\n");
    }
    else
    {
        printf("statement\n");
    }

    // NESTED IF

    if (a == 1)
    {
        if (b == 2)
        {
            printf("statement\n");
        }
        else
        {
            printf("statement\n");
        }
    }

    // If Else If ladder
    if (a == 1)
    {
        printf("statement\n");
    }
    else if (b == 2)
    {
        printf("statement\n");
    }
    else
    {
        printf("statement\n");
    }

    // Switch
    printf("Enter value of n ");
    scanf("%d",&n);
    switch (n) // 'n' should be any valid integer expression
    {
    case 1:
        printf("statement\n");
        break; // break is necessary bcz without break it will execute remaining cases too!!
    case 2:
        printf("statement\n");
        break;
    case 3:
        printf("statement\n");
        break;
    default:
        printf("statement\n");
    }

    return 0;
}