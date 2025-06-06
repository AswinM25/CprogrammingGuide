/* S2 CS2 14
linear search*/
#include<stdio.h>
void main()
{
int n,i,a[20],key;
printf("Enter the size of array");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("Enter elements to search");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if (a[i]==key)
break;
if(i<n)
{
printf("Element found at index %d",i);
}
else
{
printf("Element not found");
}
}
}
}
/*Enter the size of array5
Enter the elements45
Enter elements to search4
Element found at index 0Element found at index 1Element found at index 2Element found at index 3Element found at index 4*/
