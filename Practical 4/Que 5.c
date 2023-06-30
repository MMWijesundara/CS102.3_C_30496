#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,d;
    //assuming its a leap year
    printf("Enter month number: ");
    scanf("%d",&n);

    if(1<=n<=12)
    {
    switch (n)
    {
    case 2:printf("The number of days on the month: %d",d=29);break;

    case 4:case 6:
    case 9:case 11:
    printf("The number of days on the month: %d",d=30);break;

    default:printf("The number of days on the month: %d",d=31);
    }
    else
        printf("Invalid number");
    }

    return 0;

}
