#include <stdio.h>
int main()
{
int values1[5],values2[5],i,tot1=0,tot2=0;

//scalar sum = add individual elements of each array?
//vector sum = add corresponding elements together and display array
    printf("Enter elements for Array 1\n\n");
    for(i=0;i<=4;i++)
    {
        printf("Enter element %d in Array 1: ",i+1);
        scanf("%d",&values1[i]);
        tot1+=values1[i];
    }

    printf("\n\nEnter elements for Array 1\n\n");

    for(i=0;i<=4;i++)
    {
        printf("Enter element %d in Array 2: ",i+1);
        scanf("%d",&values2[i]);
        tot2+=values2[i];
    }
    printf("\n\nScalar sum of Array 1: %d",tot1);
    printf("\nScalar sum of Array 2: %d",tot2);

    printf("\nVector sum of Array 1 and 2:\t");

    for (i=0;i<=4;i++)
    {

        printf("%d\t",values1[i]+values2[i]);

    }

}
