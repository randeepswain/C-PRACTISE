/* 
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

#include<stdio.h>

int main(){
    float income,tax=0;
    printf(" ENTER INCOME = ");
    scanf("%f",&income);

    if(income<=250000){
     printf("TAX = %.2f",tax);
    }
    else if((income>250000)&&(income<=500000)){
      tax = (income - 250000)*0.05;
    }
    else if((income>500000)&&(income<=1000000)){
     tax = 12500+(income -500000 )*0.2;
    }
    else{
     tax = 112500+(income -1000000 )*0.3;
    }
    printf("TAX = %.2f",tax);
    return 0;
}