/* slice fn -Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
for slice.
*/
#include<stdio.h>
#include<stdlib.h>

char* slice(char str[],int m, int n){
   int slice_len = n-m;
   char* ptr1 = &str[m];
   char* sliced_str = (char*) malloc(slice_len + 1);

    for (int i = 0; i < slice_len; i++)
    {
        sliced_str[i] = str [m + i]; 
    }
    
    sliced_str[n] = '\0';

    return sliced_str;
     
    }


int main(){
    char str[19]="randeepswain";

    printf("%s",slice(str,0,7));
    free(slice(str,0,7));
    return 0;
}