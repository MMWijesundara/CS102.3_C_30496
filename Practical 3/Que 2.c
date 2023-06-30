#include <stdio.h>
int main()
{
    int n1,n2,n3,max,min;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&n1,&n2,&n3);

    max=n1;
    if (n2>max)
        max=n2;
    if (n3>max)
        max=n3;
    printf("%d is the highest number.\n",max);

    min=n1;
    if (n2<min)
        min=n2;
    if (n3<min)
        min=n3;
    printf("%d is the lowest number.\n",min);
}
