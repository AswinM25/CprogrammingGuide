/* S2 CS2 14
CALCULATOR*/
#include<stdio.h>
void main()
{
int a,b,r;
char n;
char c='%';
printf("1.ADD=+\n 2.SUBTRACT=-\n 3.MULTIPLY=*\n 4.DIVISION=/\n 5.MODULUS=%c\n",c);
scanf("%c",&n);
printf("ENTER NUMBERS");
scanf("%d%d",&a,&b);
if(n =='+')
{
r=a+b;
printf("THE RESULT IS %d",r);
}
else if(n =='-')
{ 
r=a-b;
printf("THE RESULT IS %d",r);
}
else if(n =='*')
{
r=a*b;
printf("THE RESULT IS %d",r);
}
else if (n =='/')
{ 
r=a/b;
printf("THE RESULT IS %d",r);
}
else if(n =='%')
{
r==a%b;
printf("THE RESULT IS %d",r);
}
else
{
printf("invalid");
}
}
/* OUTPUT
1.ADD=+
2.SUBTRACT=-
3.MULTIPLY=*
4.DIVISION=/
5.MODULUS=%
+
ENTER NUMBERS5
5
THE RESULT IS 10*/
