#include <stdio.h>
int main()
{
    //Variable declaration
    int byear, cyear, age;
    char sname[25];

    //Inputs
    printf("Enter your name: ");
    scanf("%s",&sname);

    printf("Enter Birth year: ");
    scanf("%d",&byear);

    printf("Enter current year: ");
    scanf("%d",&cyear);


    //Process
    age=cyear-byear;

		// "/* and */" is for multi line comments in C language.

    /*Output- Modified in a way that the output is a meaningful sentence ,
              rather than just printing name and age separately.*/

    printf("%s is now %d years old. ",sname,age);

    return 0;
}
