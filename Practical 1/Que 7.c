#include <stdio.h>
int main()
{
    //Variable declaration
    int n1,n2,n;

    //Inputs
    printf("Enter number 1: ");
    scanf("%d",&n1);

    printf("Enter number 2: ");
    scanf("%d",&n2);

    //Process - swapping values
    n=n1;
    n1=n2;
    n2=n;

    //Printing values before swapping
    printf("\nPrevious values\nNumber 1= %d\nNumber 2= %d\n\n",n2,n1);
    printf("Values after swapping\nNumber 1= %d\nNumber 2= %d\n",n1,n2);

    /*Alternative method : Before swapping values, you could print the current n1 and n2.
    Then swap the values and print new n1 and n2. That way, it will be a bit easier
    to understand the procedure. */

    return 0;
}
