#include<stdio.h>

int main(){
    int i=0,j=0,k;


    // while loop

    while(i<9){
        printf("VALUE OF i is %d\n",i);
        i = i + 1;
    }
    

    //Infinite while loop

    // while(i>=0){
    //     printf("VALUE OF i is %d\n",i);
    //     i = i + 1;
    // }

    // Write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0.
    printf("Natural number from 10 to 20\n");
    while(j>=0){
        
        if (j>=10 && j<=20){
            
            printf("%d\n",j);
        }
        j++;
    }


    // do while loop   --executes the loop atleast once
    i = 0;
    do
    {
      printf("value of i is %d\n",i);
      i++; 
    } while (i < 4);

    // for loop 
    for (i = 0; i < 5;i++ ){
        printf("value of i is %d\n",i);
    }
    
   return 0; 
}