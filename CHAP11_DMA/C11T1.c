// DYNAMIC MEMORY ALLOCATION
#include<stdio.h>
#include<stdlib.h>
int main(){
int n = 10;    
int *ptr1,*ptr2,*ptr3;

ptr1 = (int*) malloc(n * sizeof(int)); // stores garbage value by default

for (int i = 0; i < n; i++)
{
    ptr1[i] = i+1;
    printf("%d\n",ptr1[i]);
}

ptr2 = (int*) calloc(n ,sizeof(int)); // stores '0' value by default and in continuos memory location

for (int i = 0; i < n; i++)
{
    printf("%d %u\n",ptr2[i],&ptr2[i]);
}
printf("\n");
n = 5;
ptr3 = realloc(ptr2,n * sizeof(int));
for (int i = 0; i < n; i++)
{
 printf("%d %u\n",ptr3[i],&ptr3[i]);
}
printf("\n");
free(ptr3);
free(ptr2);
free(ptr1);
for (int i = 0; i < n; i++)
{
 printf("%d \n",ptr1[i]);
}


return 0;
}
