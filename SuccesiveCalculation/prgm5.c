// #include <stdio.h>
// int main(){
//     int n=3,ans=0;
//     for(int i=1;i<n*2-1;i=i+1){
//         ans=ans+i;
//     }
//     printf("Sum of odd numbers: %d", ans);
// }

#include <stdio.h>

int main() {
    int n = 99;

    if ((n / 2) * 2 == n)
        printf("Even");
    else
        printf("Odd");

    return 0;
}