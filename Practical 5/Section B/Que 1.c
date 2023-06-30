#include<stdio.h>
int main()
{
 int n,i,pos=0,neg=0,zero=0;

 for(i=1;i<=10;i++)
 {
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n==0)
        zero+=1;
    else if(n>0)
        pos+=1;
    else
        neg+=1;

 }
 printf("Count of positive numbers are %d\nCount of negative numbers are %d\nCount of zeros are %d",pos,neg,zero);
 return 0;
}
