/* S2 CS2 14
SECOND LARGEST NUMBER*/
#include<stdio.h>
void main()
{
int a=0,b=0,c,i,n;
printf("Enter the no of terms");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
printf("Enter a number");
scanf("%d", &c);
if((c>a)&&(c>b))
{
b=a;
a=c;
}
else if ((c<a)&&(c>b))
{
b=c;
}
}
printf("The second largest number is %d",b);
}

/*OUTPUT 

Enter the no of terms5
Enter a number6
Enter a number6
Enter a number7
Enter a number4
Enter a number3
The second largest number is 6*/
