//strings

#include<stdio.h>

int main(){
    char c1[5]={'r','a','n','\0'};      // '\0' null character is compulsory in this kind of assignment
    char c2[5]="ran";                  //both will print same output 
    char c3[4];
    char c4[4];
    


    for (int i = 0; i <4; i++)       
    {
        printf("%c",c1[i]);
    }
    printf("\n");
    printf("%s\n",c1);
    printf("%s\n",c2);
    

    for (int i = 0; i < 3; i++)
    {
    scanf("%c",&c3[i]);
    fflush(stdin);
    }
    c3[3]='\0';
    printf("%s\n",c3);

    scanf("%s",c4);
    printf("%s\n",c4);

  
 return 0;
}