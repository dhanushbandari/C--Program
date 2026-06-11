// Reverse the given Value or the number
// To reverse the number we use distruction and Genesis conecpt 
// First we Extract the number and use the disapperance for the next calculation and then we use the concept the of Genesis like Socket creation and Placement 
#include <stdio.h>
int main(){
    int n=1234,rev=0; // n = Holds the i/p value to be reversed and rev=0 is initialized
    while(n!=0){
        // Destruction of the number 
        int r=n%10; // Step 1: Extraction 
        n=n/10; // Step2: Disappearance
        // Genesis
        rev*=10; // Step 1: Socket Creation 
        rev+=r; // Step 2: Placement 
        printf("The Reverse Value is: %d \n",rev); // Tracing of the value at each loop 
    }
    printf("------The Final Reversed Value is------\n");
    printf("The Reverse Value is: %d \n",rev);
    return 0;
}
// ----Output----

// D:\GIT\C--Program\Genesis>gcc prgm3.c
// D:\GIT\C--Program\Genesis>a.exe
// The Reverse Value is: 4
// The Reverse Value is: 43
// The Reverse Value is: 432
// The Reverse Value is: 4321
// ------The Final Reversed Value is------
// The Reverse Value is: 4321

