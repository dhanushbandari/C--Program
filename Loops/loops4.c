#include <stdio.h> // Include the standard input-output library
int main(){
    int hcf=0,a,b,lcm; // Variable to store the highest common factor and the two numbers
    printf("Enter 1st numbers: ");
    scanf("%d",&a);
    printf("Enter 2nd numbers: ");  
    scanf("%d",&b);

    for(int i=1; i<=b; i++){ // Loop from 1 to b to find common factors
        if(a%i==0 && b%i==0){ // Check if i is a common factor of both a and b 
            hcf=i;
        }
    }
    printf("HCF = %d", hcf); // Print the highest common factor

    // LCM CAN BE FIND USING 
    lcm=(a*b)/hcf ;

    printf("\nLCM = %d", lcm); // Print the least common multiple
    return 0;
}