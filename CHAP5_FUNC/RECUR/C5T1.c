#include<stdio.h>

// function prototype   
     int sum(int , int);

// function defination
    int sum(int a,int b){
        return a+b;
    }


int main(){
    int z;
    // function call
    z = sum(9,8);
    printf("sum is %d",z);
    return 0;
}