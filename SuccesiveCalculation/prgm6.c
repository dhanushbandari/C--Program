#include <stdio.h> // Include the standard input-output library
int main() { // Main Function 
    int n , count = 0; // Variable to store the input number and count of divisors

    printf("Enter a number: "); // Prompt the user to enter a number
    scanf("%d", &n); // Read the input number from the user

    for (int i = 1; i <= n; i++) {  // Loop from 1 to n to check for divisors
        if (n % i == 0) { // Check if i is a divisor of n
            count++; // Increment count if i is a divisor of n
        }
    }
    // Check if the count of divisors is 2 (indicating a prime number)
    if (count == 2) {
        printf("%d is a prime number", n);
    // If count is not 2, then n is not a prime number
    } else {
        printf("%d is not a prime number", n);
    }

    return 0;
}