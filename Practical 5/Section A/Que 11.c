#include<stdio.h>
int main()
{
 int i,num,count=0;
 printf("Enter number: ");
 scanf("%d",&num);

 for(i=1;i<=num;i++)
 {

    if(num%i==0)
        count+=1;
 }
 if (count>2)
    printf("%d is a Composite number: ",num);
 else
    printf("%d is a Prime number.",num);
 return 0;
}
