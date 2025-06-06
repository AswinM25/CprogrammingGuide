/* S2 CS2 14
palindrome */
#include<stdio.h>
#include<string.h>
#define max 100
void main()
{
char s[100];
int a=0,flag=0,i;
printf("Enter a string");
fgets(s,max,stdin);
Enter a string malayalam
a=strlen(s);
printf("%d",a);
for(i=0;i<=a;i++)
{
if(s[i]==s[a-2-i])
{
flag++;
}
}
if(flag=a/2)
{
printf("String is palindrome");
}
else
{
printf("String is not palindrome");
}
}
/*Enter a string malayalam
11String is palindromes*/
