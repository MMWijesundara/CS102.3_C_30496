#include <stdio.h>
int main()
{
int asc;
char let;
printf("ASCII Values for letters A-Z :\n");
for (let ='A'; let<='Z'; ++let)
{
asc=let;
printf("%c : %d\n",let,asc);
}
 return 0;
}
