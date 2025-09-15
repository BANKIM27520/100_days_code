/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/
#include<stdio.h>
int main()
{
    char op;
    float num1,num2,result;
    printf("Enter an operator (+, -, *, /, %):\n");
    scanf("%c",&op);
    printf("Enter two operands:\n");
    scanf("%f%f",&num1,&num2);
    switch(op)
    {
        case '+':
            result=num1+num2;
            printf("%.2f + %.2f = %.2f",num1,num2,result);
            break;
        case '-':
            result=num1-num2;
            printf("%.2f - %.2f = %.2f",num1,num2,result);
            break;
        case '*':
            result=num1*num2;
            printf("%.2f * %.2f = %.2f",num1,num2,result);
            break;
        case '/':
            if(num2!=0)
            {
                result=num1/num2;
                printf("%.2f / %.2f = %.2f",num1,num2,result);
            }
            else
                printf("Error! Division by zero.");
            break;
        case '%':
            if((int)num2!=0)
            {
                result=(int)num1%(int)num2;
                printf("%d %% %d = %d",(int)num1,(int)num2,(int)result);
            }
            else
                printf("Error! Division by zero.");
            break;
        default:
            printf("Invalid operator! Please use one of +, -, *, /, %.");
    }
    return 0;
}