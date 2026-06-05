//Finding the given number is even or odd using if-else statement.

#include <stdio.h>

int main() {
    int n = 99;
    // Without using n%2==0
    if ((n / 2) * 2 == n) // Check if n is even by dividing it by 2 and multiplying back to see if it equals n
        printf("Even");
    else
        printf("Odd");
    return 0;
}