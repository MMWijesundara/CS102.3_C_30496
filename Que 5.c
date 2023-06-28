#include <stdio.h>
int main()
{
    //Variable declaration
    float d1,d2,total,avg;
    // Here, "Double" data type can also be used.
    //But the scanf conversion specifier should be changed to '%lf' instead of '%f'


    //Inputs
    printf("Enter first decimal number: ");
    scanf("%f",&d1);

    printf("Enter second decimal number: ");
    scanf("%f",&d2);

    //Process
    total=d1+d2;
    avg=total/2;

    //Output
    printf("Average of the two decimals: %f",avg);

    return 0;
}
