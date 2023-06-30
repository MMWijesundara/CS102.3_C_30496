#include<stdio.h>
int main()
{
 int n,tot=0;
 while(1)
 {
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n!=-1) tot+=n;
    else break;
 }
 printf("Sum: %d.",tot);
 return 0;
}
