/* S2 CS2 14
BUBBLE SORT */
#include<stdio.h>
void main()
{
int i,j,n,a[20],temp;
printf(" Enter the  size of the array");
scanf("%d",&n);
printf("Enter Elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j-1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
/* ENTER THE SIZE OF THE ARRAY 6
ENTER ELEMENTS 5
               6
               9
               8
               7
               8
               658789 */
