#include <stdio.h>
int main()
{
int i,bs,e,s;
float al,bo,gr;
char c;

printf("Enter C if you're working in Colombo: ");
scanf(" %c",&c);

printf("Enter your basic salary: ");
scanf("%d",&bs);

printf("Enter work experience in years: ");//how to input months also
scanf("%d",&e);

printf("Enter your sales per month: ");
scanf("%d",&s);

//allowance
if (e>5)
    al=al+(0.1)*bs;
if (c=="c")
    al=al+2500;

//sales bonus
if (s<25000)
    bo=s*0.1;
else if (s<50000)
    bo=s*0.12;
else
    bo=s*0.15;

//gross remuneration
gr=al+bo+bs;


printf("\nYour gross monthly remuneration is %f.Rs",gr);
return 0;
}
