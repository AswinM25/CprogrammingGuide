/* S2 CS2 14
matrixmulti*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j,k,p,q,m,n;
 printf("Enter the numer of rows and coloumns in matrix 1 :");
 scanf("%d%d",&m,&n);
 printf("Enter the numer of rows and coloumns in matrix 2:");
 scanf("%d%d",&p,&q); 
 if (n!=p)
 {
 	printf("The matrices cant be multiplied");
 	exit(0);
 }
 int a[m][n],b[p][q],c[m][q];
 printf("Enter the elements of matrix 1");
 for(i=0;i<m;i++)
 {
 	for(j=0;j<n;j++)
 	{
 		printf("Enter element %d%d :",i,j);
 		scanf("%d",&a[i][j]);
 	}
 }
 printf("Enter the elements of matrix 2");
 for(i=0;i<p;i++)
 {
 	for(j=0;j<q;j++)
 	{
 		printf("Enter element %d%d :",i,j);
 		scanf("%d",&b[i][j]);
 	}
 }
 printf("\n");
 for(i=0;i<m;i++)
 {
 	for(j=0;j<n;j++)
 	{
 		printf("%d\t",a[i][j]);
 	}
 	printf("\n");
 }
 printf("\n");
 for(i=0;i<p;i++)
 {
 	for(j=0;j<q;j++)
 	{
 		printf("%d\t",b[i][j]);
 	}
 	printf("\n");
 }
 for(i=0;i<m;i++)
 {
 	for(j=0;j<q;j++)
 	{
 		c[i][j]=0;
 		for(k=0;k<p;k++)
 		{
 		 c[i][j]=c[i][j]+a[i][k]*b[k][j];
 		}
 	}
 }
 printf("THe resultant matrix is \n");
 for(i=0;i<m;i++)
 {
 	for(j=0;j<q;j++)
 	{
 		printf("%d\t",c[i][j]);
  	}
  	/*Enter the numer of rows and coloumns in matrix 1 :5
5
Enter the numer of rows and coloumns in matrix 2:5
4
Enter the elements of matrix 1Enter element 00 :5
Enter element 01 :6
Enter element 02 :4
Enter element 03 :5
Enter element 04 :2
Enter element 10 :3
Enter element 11 :6
Enter element 12 :7
Enter element 13 :8
Enter element 14 :9
Enter element 20 :0
Enter element 21 :2
Enter element 22 :3
Enter element 23 :4
Enter element 24 :4
Enter element 30 :5
Enter element 31 :6
Enter element 32 :7
Enter element 33 :8
Enter element 34 :9
Enter element 40 :2
Enter element 41 :1
Enter element 42 :2
Enter element 43 :3
Enter element 44 :4
Enter the elements of matrix 2Enter element 00 :6
Enter element 01 :2
Enter element 02 :2
Enter element 03 :3
Enter element 10 :4
Enter element 11 :5
Enter element 12 :
2
Enter element 13 :6
Enter element 20 :7
Enter element 21 :
8
Enter element 22 :
08
Enter element 23 :1
Enter element 30 :6
Enter element 31 :7
Enter element 32 :8
Enter element 33 :9
Enter element 40 :9
Enter element 41 :7
Enter element 42 :5
Enter element 43 :6

5	6	4	5	2	
3	6	7	8	9	
0	2	3	4	4	
5	6	7	8	9	
2	1	2	3	4	

6	2	2	3	
4	5	2	6	
7	8	8	1	
6	7	8	9	
9	7	5	6	
THe resultant matrix is 
130	121	104	112	
220	211	183	178	
89	90	80	75	
232	215	187	184	
84	74	66	65
  	printf("\n");
 }
}*/
