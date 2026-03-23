# include<stdio.h>

int main(){
    int i ,j;
     for (i =1;i<5+1;i++){  // Outer Loop for rows
        for (j=1;j<i+(i-1)+1;j++){ // Inner Loop for columns
            printf("*" );
        }
        printf("\n");
     }
}



