// structures

#include <stdio.h>
#include <string.h>

struct employee
{
    char name[10];
    int age;
    float salary;
};

typedef struct club
{
    char name[10];
    int age;
} cb;

int main()
{
    struct employee e1;
    struct employee *ptr1;
    ptr1 = &e1;

    cb c1;
    strcpy(e1.name, "ran");
    e1.age = 19;
    e1.salary = 34000.00;

    c1.age = 17;

    printf("%s %d %.2f\n", e1.name, e1.age, e1.salary);
    printf("%s %d %.2f\n", (*ptr1).name, (*ptr1).age, (*ptr1).salary);
    printf("%s %d %.2f\n", ptr1->name, ptr1->age, ptr1->salary);
    printf("%d\n", c1.age);
    return 0;
}