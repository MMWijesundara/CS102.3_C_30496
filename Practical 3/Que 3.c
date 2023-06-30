#include <stdio.h>
int main()
{
	float bsalary,nsalary,inc;
	char empname[20];

	printf("Enter empname: ");
	scanf("%s",&empname);
	printf("Enter basic salary: ");
	scanf("%f",&bsalary);

	if (bsalary<5000)
        inc=(0.05)*bsalary;
    else if (bsalary<10000)
        inc=(0.1)*bsalary;
    else
        inc=(0.15)*bsalary;

    nsalary=bsalary+inc;
    printf("Your new salary is Rs.%.2f",nsalary);

	return 0;
}
