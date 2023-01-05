#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculator");
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);


    char c;
    printf("Enter which type of calculation you want: ");
    scanf(" %c",&c);
    switch(c)
    {
    case '+':
        printf("addition of %d + %d = %d",a,b,a+b);
        break;
    case '-':
        printf("substraction of %d - %d = %d",a,b,a-b);
        break;
    case '*':
        printf("multiplication of %d * %d = %d",a,b,a*b);
        break;
    case '/':
        printf("division of %d / %d = %d",a,b,a/b);
        break;

    default:
        printf("invalid");
    }
    return 0;
}