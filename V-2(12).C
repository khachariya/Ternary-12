#include<stdio.h>
#include<conio.h>

main()
{
 clrscr();
 int a,b,c;
 printf("enter value A=");
 scanf("%d",&a);
 printf("enter value B=");
 scanf("%d",&b);
 printf("enter value C=");
 scanf("%d",&c);
  if(a>b)
  {
      if(a>c)
      {
	   printf("A is min");
      }
      else
      {
	  printf("C is min");
      }
  }
  else
  {
     if(b>c)
     {
	printf("B is min");
     }
     else
     {
	printf("C is min");
     }
  }
  getch();
}

