#include <stdio.h>

//While loop
int main()
{
    int x=0;
    while(x<=100)
    {
       printf("%d\t",x);
       x++;
    }
    printf("\n\n");
    q1b();
    q1c();
    return 0;

}
//do while loop
void q1b()
{
    int x;
    do
    {
       printf("%d\t",x);
       x++;
    }while(x<=100);
    printf("\n\n");
    return 0;
}
//for loop
void q1c()
{
    for(int x=0;x<=100;x++)
    {
       printf("%d\t",x);
    }
    printf("\n\n");
    return 0;
}
