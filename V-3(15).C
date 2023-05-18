#include<stdio.h>
#include<conio.h>

main()
{
  clrscr();
  int a=56,b=65,c=34,d=9;
  (a>b)?(a>c)?(a>d)?printf("A is max"):printf("D is max"):(c>d)?printf("C is max"):printf("D is max"):
       (b>c)?(b>d)?printf("B is max"):printf("D is max"):(c>d)?printf("C is max"):printf("D is max");
   getch();
}
