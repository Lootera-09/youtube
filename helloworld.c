#include<stdio.h>

int main()
{
    char operator;
    double num1,num2,result;

    printf("\nEnter the operator ??");
    scanf("%c",&operator);

    printf("\nEnter the frist value : ");
    scanf("%lf",&num1);

    printf("\nEnter the second value : ");
    scanf("%lf",&num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\n Result : %.2lf",result);
        break;

    case '-':
        result = num1 - num2;
        printf("\n Result : %.2lf",result);
        break; 

    case '*':
        result = num1 * num2;
        printf("\n Result : %.2lf",result);
        break;   

    case '/':
        result = num1 / num2;
        printf("\n Result : %.2lf",result);
        break;     

   
    
    default:
        printf("\n%c is not a valid operator.\nPlease try again!!\n",operator);
        break;
    }

    
    return 0;
}