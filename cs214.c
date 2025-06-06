/* S2 CS2 14
The greatest number*/
#include<stdio.h>
void main()
{
 int a,b,c;
 printf("ENTER THE 3 NUMBERS");
 scanf("%d%d%d", &a,&b,&c);
 if((a>b)&&(a>c))
 {
    printf("%d is the greatest number",a);
 }
    else if((b>a)&&(b>c))
 {
    printf("%d is the greatest number",b);
 }
    else
 {
    printf("%d is the greatest number",c);
 }
 }
 /*OUTPUT
 
ENTER THE 3 NUMBERS5
6
7
7 is the greatest number*/
