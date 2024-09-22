#include <stdio.h>
int main()
{
    char operator;
    double num1;
    double num2;
    double result;
    printf("enter an operator(+ - * /)");
    scanf("%c",&operator);
    printf("enter num 1::");
    scanf("%lf", &num1);
    printf("enter num 2::");
    scanf("%lf", &num2);
    switch (operator)
    {
    case '+':
    result=num1+num2;
    printf("result of this is %.2lf",result);
        break;
        case '-':
    result=num1-num2;
    printf("result of this is %.2lf",result);
        break;
        case '*':
    result=num1*num2;
    printf("result of this is %.2lf",result);
        break;
        case '/':
    result=num1/num2;
    printf("result of this is %.2lf",result);
        break;
    
    default:
        break;
    }
    return 0;
}