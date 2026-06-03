// UP-DOWN and DOWN-UP Count using FOR LOOP
# include<stdio.h>
// MAIN FUNCTION
int main (){
    int i,j; // Loop Control Variables
    // Loop from 1 to 10
    for (i =1; i<11; i++){ 
        printf(" Up-Down Count:  %d \n",i);  // Print Up-Down Count
    }
    printf("\n");// New Line for better readability
    // Loop from 10 to 1
    for(j=10; j>0; j--){ 
        printf(" Down-Up Count:  %d \n",j);//  Print Down-Up Count
    }
return 0; // Return Statement
}