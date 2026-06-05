#include <stdio.h>
int main(){
    int a=20,num=0;
    for(int i=1;i<=a;i++){
        num=num+(2*i);
    }
    printf("Num= %d",num);
    return 0;
}