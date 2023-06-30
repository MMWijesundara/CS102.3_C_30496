#include<stdio.h>
int main()
{
 char c;

 printf("Enter a single character: ");
 scanf("%c",&c);
 switch (c)
{
 case 'A':case 'a':printf("%c is a vowel\n",c);break;
 case 'E':case 'e':printf("%c is a vowel\n",c);break;
 case 'I':case 'i':printf("%c is a vowel\n",c);break;
 case 'O':case 'o':printf("%c is a vowel\n",c);break;
 case 'U':case 'u':printf("%c is a vowel\n",c);break;
 default:printf("%c is a consonant\n",c);break;
 return 0;
 }
}
