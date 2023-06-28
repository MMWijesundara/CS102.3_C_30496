#include <stdio.h>
int main()
{
    //Variable declaration
    int v1;
    float v2;
    double v3;
    char v4;

    //Inputs
    printf("Enter an integer value: ");
    scanf("%d",&v1);

    printf("Enter a float value: ");
    scanf("%f",&v2);

    printf("Enter a double value: ");
    scanf("%lf",&v3);

    printf("Enter a single character: ");
    scanf(" %c",&v4);

    //Outputs
    printf("\nThe integer value you entered is: %d\n",v1);
    printf("The float value you entered is: %.3f\n",v2);
    //Above, I have used %.3f because I want the answer to be in 3 decimals.
    printf("The double value you entered is: %lf\n",v3);
    printf("The char value you entered is: %c\n",v4);

    return 0;
}

// However, if you want to input string values, the following changes should be done.

/*
char [20] v4;
//enter the number of characters to input, inside the square brackets.

printf("Enter characters: ");
scanf(" %s",&v4); //%s instead of %c. Because %c accepts a single  character.

printf("The char value you entered is: %s\n",v4); //%s instead of %c.  */


