#include <stdio.h>

int main()
{
    int n,x=1,fac=1;


    printf("Enter a number: ");
    scanf("%d",&n);

    if (n>-1)
    {
        while(x<=n)
        {
            fac=fac*x;
            x++;
        }
    printf("Factorial of %d is %d",n,fac);
    }
    else
        printf("Factorial is only defined for non negative integers.");

    return 0;

}
