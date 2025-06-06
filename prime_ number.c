#include<stdio.h>
void main()
{
int j;
printf("enter the number");
scanf("%d",&j);
int ct=0;
for(int i=1;i<=j;i++)
{
if(j%i==0);
ct++;
}
if(j!=1)
{
if(ct==2)
printf("prime");
else
printf("composite");
}
else
printf("Neither prime not composite");
}
