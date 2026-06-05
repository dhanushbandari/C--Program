// Sum of first 10 Natural numbers
#include <stdio.h>
int main(){
    int a=10,sum=0; // Initialization 
    for(int i=0;i<=a;i++){ // loop condition 
        sum+=i; // Sum value 
    }
    printf("The Sum of 1st natural number is: \n %d",sum); // display statement 
    return 0;
}