#include <stdio.h>

int main()
{
int marks,i,tot=0,avg;
for (i=1;i<=10;i++)
{
    printf("Enter mark %d: ",i);
    scanf("%d",&marks);
    tot=tot+marks;
}
avg=tot/10.0;
printf("Total of the 10 marks: %d\n",tot);
printf("Average of the 10 marks: %d\n",avg);

if(avg<50)
{
    printf("Fail!");
}
else
    printf("Pass!");
return 0;
}
