/* S2 CS2 14
LEAP YEAR*/
#include<stdio.h>
void main()
{
  int a;
  printf("ENTER THE YEAR");
  scanf("%d",&a);
  if(a%100==0)
 {
  if(a%400==0)
  {
  printf("it is a leap year");
  }
  else
  {
  printf("not a leap year");
  }
  }
  else 
  {
   if(a%4==0)
   {
   printf("%d it is a leap year",a);
   }
   else
   {
   printf("%d it is not a leap year",a);
   }
   }
   }
/* OUTPUT
ENTER THE YEAR2018
2018 it is not a leap year*/
