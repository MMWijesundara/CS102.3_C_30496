#include <stdio.h>
int main()
{
    int values[10],i,max,min,tot=0;

    for(i=0;i<=9;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&values[i]);
        tot+=values[i];
    }

    max=values[0];
    min=values[0];

    for(i=0;i<=9;i++)
    {
        if(values[i]>max){max=values[i];}
        if(values[i]<min){min=values[i];}
    }



    printf("\n%d is the maximum value.\n%d is the minimum value.\n%f is the average value.\n\n",max,min,tot/10.0);
    printf("Reverse order of values:\n");

    for(i=9;i>=0;i--)
    {
       printf("%d\n",values[i]);
    }
}
