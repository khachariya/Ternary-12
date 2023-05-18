#include<stdio.h>
#include<conio.h>

main()
{
  int a,b,c,d,e;
  clrscr();
  printf("enter value A=");
  scanf("%d",&a);
  printf("enter value B=");
  scanf("%de",&b);
  printf("enter value C=");
  scanf("%d",&c) ;
  printf("enter value D=");
  scanf("%d",&d);
  printf("enter value E=");
  scanf("%d",&e);

  if(a<b)
  {
     if(a<c)
     {
	if(a<d)
	{
	  if(a<e)
	  {
	      printf("A is minimum");
	  }
	  else
	  {
	      printf("D is min.");
	  }
	}
	else
	{
	   printf("C is min.");
	}
     }
     else
     {
	if(b<c)
	{
	   if(b<d)
	   {
	      if(b<e)
	      {
		 printf("B is min.");
	      }
	      else
	      {
		 printf("E is min.");
	      }
	   }
	   else
	   {
	      if(d<e)
	      {
		 printf("D is min.");
	      }
	      else
	      {
		 printf("E is min.");
	      }
	   }
	}
	else
	{
	  if(c<d)
	  {
	     printf("C is min.");
	  }
	  else
	  {
	     printf("D is min.");
	  }
	}
   }
   getch();
}
