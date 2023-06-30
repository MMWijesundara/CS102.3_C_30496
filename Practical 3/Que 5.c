#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &n1, &n2);

    if (n2!=0 && n1%n2==0)
//making sure n2 doesn't equal to 0 to avoid any undefined answers.
    printf("%d is a multiple of %d",n1,n2);
    else
    printf("%d is not a multiple of %d",n1,n2);
}
