/* S2 CS2 14
loyds triangle*/
#include<stdio.h>
void main()
{
int i,j,k=1,n;
printf("Enter no of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d",k);
k+=1;
}
printf("\n");
}
}
/*Enter no of rows5
12345
678910
1112131415
1617181920
2122232425*/

