#include<stdio.h>

int main()
{
    char operator;
    int num1, num2;

    printf("Enter calculation: ");
    scanf("%d %c %d", &num1, &operator, &num2);

    // printf("Enter first number: ");
    // scanf("%d",&num1);

    // printf("Enter second number: ");
    // scanf("%d",&num2);

    // printf("Enter operator: ");
    // scanf("%c",&opertaor)

    switch(operator)
    {
        case '+': printf("%d ",num1+num2);
                break;

        case '-': printf("%d ",num1-num2);
                break; 

        case '*': printf("%d ",num1*num2);
                break; 

        case '/': printf("%d ",num1/num2);
                break; 

        default: printf("Invalid entry!"); 
    }
    
}