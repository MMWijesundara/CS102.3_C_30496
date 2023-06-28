
#include <stdio.h>
int main()
{
	printf("%5d%5d\n", 1, 2);	//Right Align
	printf("%5d%5d\n", 10, 20);	//Right Align
	printf("\n\n\n");
	printf("%-5d%-5d\n", 1, 2);	//Left Align
	printf("%-5d%-5d\n", 10, 20);	//Left Align

Que2bb();
return 0;
}
/* Output will look like
    1    2
   10   20
*/

/*
Here, 5 indicates the minimum width of the character. In this case,on the first printf, 1 will be printed with three other spaces to match the minimum width requirement. Hence, it looks like the numbers is right aligned.

Using -5 will result in leaving spaces after the character to fulfill the minimum length requirement. Hence, looks like the number is left aligned.

We can use this to understand this better. */

void Que2bb()
{
	printf("\n\n\n");
	printf("%5d\n",1);
	printf("%4d\n",1);
	printf("%3d\n",1);
	printf("%2d\n",1);
	printf("%1d\n",1);
	printf("%d\n",1);

	return 0;
}
/*
Output will look like :
    1
   1
  1
 1
1
1

 Last two outputs look the same because, %1d means the min width should be 1 and the number itself is 1 block wide. */

