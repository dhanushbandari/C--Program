// Length of the given number 
// The total number of times the digits are destroyed itself is the length of the number 
// We just need count the Number of loop runs 
#include <stdio.h>
int main(){
    int n=7213487,count=0; // initalizing the number and initalizing the count==0 
    while(n!=0){ 
        int r= n%10; // Extraction of the number 
        n=n/10;  // Dissapreance of the number 
        count++; // count the number of while loop (In this case it is 7)
    }
printf("The Length is %d",count); // Displaying the Count that while loop runs(In this case it's 7) The Length is 7
return 0;
}

// ----- Output ------ 
// D:\GIT\C--Program\Genesis>a.exe
// The Length is 1
// D:\GIT\C--Program\Genesis>