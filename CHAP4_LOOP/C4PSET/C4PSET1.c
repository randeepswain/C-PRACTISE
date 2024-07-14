// Write a program to check whether a given number is prime or not using loops.

#include<stdio.h>

int main(){
    int num,i,isprime=0;

printf("Enter the number: ");
scanf("%d",&num);

if (num<2)
{                               
    isprime = 0;
}


for(i=2;i<num;i++){

 if(num%i == 0){
    isprime = 0;
    break;
 }
 else{
    isprime = 1;
 }
}
if((isprime==0) && (num!=2)){
   printf("%d is not a prime number",num);
}
else{
   printf("%d is a prime number",num);
}
    return 0;
}