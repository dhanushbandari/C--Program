// print all the even number between 1 and 20
# include<stdio.h>
// Main Function 
int main(){
    int i,j; // Loop Control Variable
    // Loop from 1 to 20
    for(i=1; i<=20; i++){
        // Check if the number is even
        if (i%2==0){
            printf(" Even number : %d \n", i); // print the even number 
        }
    }
    for(j=1; j<=20; j++){
        // Check if the number is odd
        if (j%2!=0){
            printf(" Odd number : %d \n", j); // print the odd number 
        }
    }
return 0; // Return Statement
}