#include <stdio.h>
int main()
{
    double c,f;

    printf("Enter temperature reading in degrees Fahrenheit: ");
    scanf("%lf",&f);

    c=(5.0/9)*(f-32); //5.0 instead of 5

    printf("Temperature in degree celsius is %.3f",c);

	return 0;
}

/* C=(5.0/9)*(F-32)
Here, 5.0 should be used instead of 5 to get the code to work. 5/9 would simply mean integer division, which gives only the decimal part as output;  0 , in this case. By adding the float value 5.0 , a floating point division is performed which gives the correct answer. */
