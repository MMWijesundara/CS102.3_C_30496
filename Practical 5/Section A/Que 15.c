#include<stdio.h>
int main()
{
 int myarr[10],i=0,n,count=0;
 for(i=0;i<=9;i++)
 {
    printf("Enter a number: ");
    scanf("%d",&n);
    myarr[i]=n;
    if(n%2==0 && n!=0)count++;
 }
 printf("Array Elements: ");

 for(i=0;i<=9;i++)
 {
    printf("%d ",myarr[i]);
 }
 printf("\nCount of even numbers: %d",count);

 return 0;
}
