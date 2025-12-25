# include<stdio.h>
// Main Function
 int main(){
    printf("Welcome to HOTEL SURABHI \n"); // Welcome Message
    int people ,cost,roomType;
    printf(" Enter the number of People:- "); // Taking Input for number of people
    scanf("%d",& people); // Storing Input value in people variable 
    printf("Type Of Rooms Available:- \n");
    printf(" 1. Single Room \n 2. Double Room \n 3. Family Room \n");
    printf(" Enter the Room Type (1/2/3):- ");
    scanf("%d",&roomType);
    // Using if..else if..else Statement
    if(roomType==1){
        cost=1000;  // Cost for Single Room
    }else if(roomType==2){
        cost=1800;  // Cost for Double Room
    }else if(roomType==3){
        cost=2500;  // Cost for Family Room         
    }else{
        printf(" Invalid Room Type Selected \n");           
        return 0; // Exit the program
    }                             
int totalcost= cost*people;
printf(" THANK YOU FOR CHOOSING HOTEL SURABHI \n");
printf(" The Total Cost is  : %d \n", totalcost);
return 0 ; 
}
