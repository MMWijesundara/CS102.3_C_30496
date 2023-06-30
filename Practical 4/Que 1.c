#include <stdio.h>

//if else
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is an even number\n\n", n);
    else if (n % 2 == 1)
        printf("%d is an odd number\n\n", n);
    else
        printf("%d is neither even nor odd\n\n", n);
    q1b();
    return 0;
}

//switch
void q1b()
{
    int n,a;
    printf("Enter a number: ");
    scanf("%d", &n);

    a=n%2;

    switch(a)
    {
        case 1:printf("odd number");break;
        case 0:printf("even number");break;
        default:printf("neither odd or even");break;


    }


    return 0;
}
