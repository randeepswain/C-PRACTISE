#include<stdio.h>
#include<string.h>

int main(){
    char c5[5];
    char c6[10]="deep";
    char c7[10]="jokes";
    int n,m;

      gets(c5); // not recommended to use  due to buffer overflow
    puts(c5); //adds a new line character

    n = strlen(c6);
    printf("%d\n",n);
    strcat(c6,c7); //add c7 to c6
    printf("%s %s\n",c6,c7);
    m = strcmp(c6,c7); //deep jokes negative
    printf("%d\n",m);    
    strcpy(c6,c7); //copies from c7 to c6
    printf("%s %s\n",c6,c7);
    

    return 0;
}