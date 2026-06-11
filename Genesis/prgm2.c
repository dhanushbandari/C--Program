// Calculate the Sum of the digits of the Given Number
// The Individual digit of the given number can be sum using Distrcution of the number 
// The Reminder "r (Extraction Process)" stores the indivdual value of each loops unit/once place so we can use the r value to sum every number 

#include <stdio.h>
int main(){
    int n=7213487,sum=0; // Initializing 
    while(n!=0){
        int r=n%10; // Extraction of number
        n=n/10; // Dissapperance of the number 
        sum+=r; // sum
    }
printf("The sum is %d",sum); // The result is stored in Sum
return 0;
}

// ---- Output ----
// D:\GIT\C--Program\Genesis>gcc prgm2.c
// D:\GIT\C--Program\Genesis>a.exe
// The sum is 32