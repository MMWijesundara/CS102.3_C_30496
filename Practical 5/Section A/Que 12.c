 #include<stdio.h>
int main()
{
 int i,num,count=1;
 printf("Enter number: ");
 scanf("%d",&num);

for(i=1;i<=num;i++)
{
if(num%i==0)
    {printf("Factor %d: %d\n",count,i);
     count+=1;}
}
return 0;
}
