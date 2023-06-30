#include <stdio.h>

int main()
{
int num,tempnum,sum=0,result,i=0;
printf("Enter number:");
scanf("%d",&num);
tempnum=num;

while(num>0)
{
    result=num%10;
    sum+=(result*result*result);
    num/=10;
    i++;
}
if (tempnum==sum)printf("%d is an Armstrong number",tempnum);
else {printf("%d is not an Armstrong number",tempnum);}
return 0;

}
