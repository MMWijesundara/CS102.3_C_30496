#include<stdio.h>
int main()
{
 int myarr[10],i=0;
 for(i=0;i<=9;i++)
 {
    printf("Enter a number: ");
    scanf("%d",&myarr[i]);
 }
 printf("Array Elements: ");

 for(i=0;i<=9;i++)
 {
    printf("%d ",myarr[i]);
 }

 return 0;
}
