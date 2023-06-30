#include<stdio.h>
int main()
{
  int empno,bs,counter=0;
  while(1)
  {

  printf("Enter Employee number: ");
  scanf("%d",&empno);

  if (empno==-999){break;}

  printf("Enter basic salary: ");
  scanf("%d",&bs);

  if(bs>=5000) {counter++;}
  }

  printf("Number of employees with basic salary>=5000: %d",counter);
}
