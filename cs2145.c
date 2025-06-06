/*S2 CS2 14
ARMSTRONG NUMBER*/
#include<stdio.h>
void main()
{
int num, a=0, sum=0, b;
printf("Enter a number:");
scanf("%d",&num);
b=num;
while(num!=0)
{
a=num%10;
sum=sum+a*a*a;
num=num/10;
}
if(b==sum)
{
printf("It is a Armstrong number");
}
else
{
printf("It is not a Armstrong number");
}
}
/*OUTPUT
Enter a number:573
It is not a Armstrong number*/
