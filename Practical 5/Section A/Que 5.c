#include <stdio.h>

int main()
{
int num,sum=0,result,i=0;
printf("Enter number:");
scanf("%d",&num);

printf("Reversed digits of %d is ",num);

do
{
    result=num%10;
    if(num!=0)
    printf("%d",result);
    num/=10;

}while(1);

return 0;

}
