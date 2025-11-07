#include<stdio.h>
int main(){
    char op;
    float num1, num2,result = 0;
    printf("Enter operants '+' / '-' / '*' / '/'\n");
    scanf("%c",&op);
    printf("Enter two numbers:\n");
    scanf("%f%f",&num1,&num2);
    switch (op)
    {
    case '+':{
        result = num1 + num2;
        printf("result is %.2f",result);
        break;
    }
    case '-':{
        result = num1 - num2;
        printf("result is %.2f",result);
        break;
    }
    case '*':{
        result = num1  * num2;
        printf("result is %.2f",result);
        break;
    }
    case '/':{
        result = num1 / num2;
        printf("result is %.2f",result);
        break;
    }
    default:
        printf("you are choosing wrong option");
        break;
    }
    
    return 0;
}