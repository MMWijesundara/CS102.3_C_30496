#include <stdio.h>

int main()
{
    char operator;
    float n1,n2,result=0;

    printf("Select an operator: (+ - * / % )\n");
    scanf("%c",&operator);
    printf("Enter two numbers you want to calculate: ");
    scanf("%f%f", &n1, &n2);


    switch(operator)
        {
            case'+':
                result=n1+n2;
                break;
            case'-':
                result=n1-n2;
                break;
            case'*':
                result=n1*n2;
                break;
            case'/':
                result=n1/n2;
                break;


            default:printf("invalid numbers");break;


        }
    printf("%f is the answer",result);
    return 0;
}
