#include <stdio.h>

int main()
{
int num,sum=0,result,i=0;
printf("Enter number:");
scanf("%d",&num);

while(num!=0)
{
    result=num%10;
    sum+=result; //shorthand operator
    num/=10; //num=num/10
    i++;
}
printf("Summation of the %d numbers=%d",i,sum);
return 0;

}
