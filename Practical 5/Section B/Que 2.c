#include<stdio.h>
int main()
{
  int i,marks[10],max=0,min=0,tot=0;
    for(i=0;i<10;i++)
    {
        printf("Enter mark %d: ",i+1);
        scanf("%d",&marks[i]);
        tot+=marks[i];
    }
    max=marks[0];
    min=marks[0];
    for (i=0;i<10;i++)
    {
        if (marks[i]>max)
            {max=marks[i];}
        if (marks[i]<min)
            {min=marks[i];}
    }
    printf("max: %d\nmin: %d\n",max,min);
    printf("Average: %.2f",tot/10.0);
}
