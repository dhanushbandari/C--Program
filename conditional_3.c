# include<stdio.h>
int main(){
    float num1,num2,result;
    char op ;
    printf("enter the FIRST number:- ");
    scanf("%f",&num1);
    printf("enter the 2nd number:-  ");
    scanf("%f",&num2);
    printf("enter the operator (+,-,*,/):-  ");
    scanf(" %c",&op);
    if (op == '+'){
        result = num1 + num2;
        printf("the result is: %f",result);   
    }
    else if (op == '-'){
        result = num1 -num2;
        printf("the result is: %f",result);
    }
    else if (op == '*'){
        result = num1*num2 ;
        printf("the result is: %f",result);
    }
    else if (op == '/'){
        result = num1 / num2 ;
        printf("the result is: %f",result);
    }
    else {
        printf (" the operator is invalid");
    }
return 0;
}
