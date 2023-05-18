#include<stdio.h>
#include<conio.h>

main()
{
  clrscr();
  int a=54,b=65,c=89;
  (a>b)?(a>c)?printf("A is max"):printf("C is max")
       :(b>c)?printf("B is max"):printf("C is max");
  getch();
}