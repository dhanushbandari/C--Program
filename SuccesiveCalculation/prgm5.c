// Adding sum of even and odd numbers

#include <stdio.h>
int main(){
    int n=3,ans=0;
    for(int i=2;i<n*2+1;i=i+2){ // for adding the odd number just give (i=0;i<=n*2-1;i=i+1);
        ans=ans+i;
    }
    printf("Sum of odd numbers: %d", ans);
}

