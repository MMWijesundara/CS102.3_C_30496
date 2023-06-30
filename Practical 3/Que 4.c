#include <stdio.h>
int main()
{
    char u[5];
    float r,pi=3.14159;

    printf("Enter radius of the circle with unit : ");
    scanf("%f%s",&r,&u);

    printf("\nDiameter: %f%s",2.0*r,u);
    printf("\nCircumference: %f%s",2*pi*r,u);
    printf("\nArea: %f%s\n",pi*r*r,u);
    return 0;
}
