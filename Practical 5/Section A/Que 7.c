#include <stdio.h>
int main()
{
 int num1 = 0, num2 = 1, num, count;

 printf("First 10 Numbers of the Fabonacci sequence are: ");

 for (count = 0; count <=9; count++)
{
 if (count <= 1)num = count;
 else {
 num = num1 + num2;
 num1 = num2;
 num2 = num;
 }
 printf("%d ", num);
 }
 return 0;
}
