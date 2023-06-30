#include<stdio.h>
int main()
{
  int counter=0,i,tot=0,price;
  float ave;
  for(i=0;i<=9;i++)
    {
        printf("Enter price of item %d: $",i+1);
        scanf("%d",&price);
        tot+=price;

        if (price>200)
            {counter++;}
    }
    ave=tot/10.0;
    printf("%d items cost more than $200",counter);
    printf("\nAverage value of an item: %.2f",ave);
}
