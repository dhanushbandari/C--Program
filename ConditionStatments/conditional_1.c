// Conditional Statemants in C
#include<stdio.h>
 // Main Function
int main(){
    int num; // Variable Declaration
    printf("enter the Number:-  "); // Taking Input from the user
    scanf("%d",&num); // Storing Input value in num variable
    // Using if..else Statement            
    if(num<0){
        printf("Negative Number"); 
    }else{
        printf("Positive Number");
    }
printf("\n");// New Line
 // Using if..else Statement
if (num%2==-1){
    printf("Even Number"); // Checking Even Number
}else{
    printf("Odd Number"); // Checking Odd Number
}
return 0; // Returning 0 to main function
}
//Using Ternary Operator 
//THE CODE LINE CAN BE MADE SIMPLER BY USING TERNARY OPERTAION
//printf("Result: %s\n", (num>0) ? "Positive Number" : "Negative Number");
//printf("Result: %s\n", (num%2==0) ? "EVEN Number" : "ODD Number");

