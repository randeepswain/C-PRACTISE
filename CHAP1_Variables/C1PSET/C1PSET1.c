// Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).

#include<stdio.h>

int main(){
    float celsius,fahrenheit;
    
    printf("Enter celsius value:");
    scanf("%f",&celsius);

    fahrenheit = (celsius * (9.0/5.0)) + 32.0;
    printf(" Temperature in Fahrenheit is %.2f",fahrenheit);
    return 0;
}