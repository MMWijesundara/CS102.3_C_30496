#include<stdio.h>
int main()
{
 int base,exponent,result=1,i;

 printf("Enter the base value: ");
 scanf("%d",&base);

 printf("Enter the exponent: ");
 scanf("%d",&exponent);

 for(i=0;i<exponent;i++)
 {
     result*=base;
 }
 printf("%dth power of %d is %d.",exponent,base,result);
}
