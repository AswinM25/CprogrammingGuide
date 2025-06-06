/*S2 CS2 14
GRADES*/
#include<stdio.h>
void main()
{
int marks,a;
printf("ENTER YOUR MARKS");
scanf("%d",&marks);
a = marks/10;
switch(a)
{
case 10:
printf("YOUR GRADE IS S");
break;
case 9:
printf("YOUR GRADE IS A+");
break;
case 8:
printf("YOUR GRADE IS A");
break;
case 7:
printf("YOUR GRADE IS B+");
break;
case 6:
printf("YOUR GRADE IS B");
break;
case 5:
printf("YOUR GRADE IS C+");
break;
case 4:
printf("YOUR GRADE IS C");
break;
case 3:
case 2:
case 1:
case 0:
printf("FAILED");
break;
default:
printf("invalid entry");
}
}
/*OUTPUT
ENTER YOUR MARKS70
YOUR GRADE IS B+*/

