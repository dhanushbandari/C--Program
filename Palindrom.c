# include <stdio.h>
int main(){
    int n=12321,copy =n,rev=0; // n = Holds the i/p value to be reversed and rev=0 is initialized
    while(n!=0){
        // Destruction of the number 
        int r=n%10; // Step 1: Extraction 
        n=n/10; // Step2: Disappearance
        // Genesis
        rev*=10; // Step 1: Socket Creation 
        rev+=r; // Step 2: Placement 
    }
    if(copy==rev){ // If the original number and the reversed number are the same, then it is a palindrome
        printf("%d is a Palindrome Number",copy);
    } else { // If they are not the same, then it is not a palindrome
        printf("%d is not a Palindrome Number",copy);
    }
    return 0;
}