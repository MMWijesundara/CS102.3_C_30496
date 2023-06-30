#include <stdio.h>
#include <math.h>
int main()
{
    char u[5];
    int n;
    float cer,area,vol,rad;


    printf("Enter radius with unit: ");
    scanf("%f%s",&rad,&u);

    printf("1.Cercumfarance\n2.Area\n3.Volume\n");
    printf("Enter your choice number: ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:

        printf("Cercumfarance is %.3f%s\n",2*M_PI*rad,u);break;//using math library
    case 2:

        printf("Area is %.3f%s\n",M_PI*rad*rad,u);break;
    case 3:

        printf("Volume is %.3f%s\n",(4/3.0)*M_PI*rad*rad*rad,u);break;
    default:
        printf("Invalid choice");

    }

    return 0;

}
