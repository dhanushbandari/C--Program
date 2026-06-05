// Factorial of the number 
#include <stdio.h>
int main(){ 
    int n=0,ans=1; 
    for(int i=1; i<=n; i++){ // Loop starts from 1 because Zero will give Not Valide output (1x0 or 0x1 is always equal to 0)
        ans*=i;
    }
    printf("The factorial of the numbers %d",ans);
    return 0;
}