// Calculate the a**b without using "**" Operator

#include <stdio.h>
int main(){
    int a=2,b=0,ans=1; // ans =1 because anything to the power zero is always 1
    for(int i=1;i<=b;i++){  // Intializing the value of b which decide how many times to get multiplie 
        ans*=a;  
    }
    printf("The a^b value is: %d ",ans); 
    return 0;

}