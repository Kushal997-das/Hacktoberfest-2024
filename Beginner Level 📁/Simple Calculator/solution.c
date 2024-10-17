#include<stdio.h>
void main()
{
    char op;
    int num1,num2;
    printf("Enter  the \a expression :\n");
    scanf("%d%c%d",&num1,&op,&num2);
    switch(op)
    {
        case '+':
        printf("%d",num1+num2);
        break;
        case '-':
        printf("%d",num1-num2);
        break;
        case '*':
        printf("%d",num1*num2);
        break;
        case '/':
        if(num1==0)
        {
        printf("cannot divide by zero");
        break;
        }
        printf("%f",(float)num1/num2);
        break;
        default:
        printf("INVALID");
    }
}
