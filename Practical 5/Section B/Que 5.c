#include<stdio.h>
int main()
{
  int empno,hrs,count1=0,count2=0;
  float otr;
  while(1)
  {

  printf("Enter Employee number: ");
  scanf("%d",&empno);

  if (empno==-999){break;}
  count1++;

  printf("No of hours worked: ");
  scanf("%d",&hrs);

  if(hrs>40){otr=hrs*200.0;}
  else {otr=hrs*150.0;}

  printf("\nEmployee no: %d\n",empno);
  printf("Over time payment: %.2f\n\n\n",otr);

  if (otr>4000.00){count2++;}
  }

  printf("Percentage of employees whose Over Time Payment >Rs.4000: %.2f%%",(float)count2 * 100 / count1);
  return 0;

}
