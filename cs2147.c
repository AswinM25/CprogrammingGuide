/* S2 CS2 14
SUM OF SERIES*/
#include<stdio.h>
#include<math.h>
void main()
{
int i=1,n;
float sum=1,a=1;
printf("Enter the numbers needed");
scanf("%d",&n);
for(i=1;i<n;i++)
{
a=1/pow(-2,i);
sum = sum-a;
}
printf("\n %f is the sum of series \n",sum);
}
/*Enter the numbers needed7

 1.328125 is the sum of series*/ 
