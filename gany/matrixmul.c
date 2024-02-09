#include<stdio.h>
int main()
{
	int A[10][10], B[10][10], C[10][10],i,j,k,m,n,p,q;
	printf("Enter the size of the matrix A\n");
	scanf("%d%d",&m,&n);
	printf("Enter the size of matrix B\n");
	scanf("%d%d",&p,&q);
	if(n!=p)
	printf("Matrix multiplication is not possible\n");
	else
	{
		printf("Enter elements of matrix A\n");
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		scanf("%d",&A[i][j]);
		printf("Enter the elements of matrix B\n");
		for(i=0;i<p;i++)
		for(j=0;j<q;j++)
		scanf("%d",&B[i][j]);
		for(i=0;i<m;i++)
        for(j=0;j<q;j++)
		  {
			  C[i][j]=0;
			  for(k=0;k<n;k++)
			  C[i][j]=C[i][j]+A[i][j]*B[i][j];
		  }
		  printf("The resultant matrix C is\n");
		  for(i=0;i<m;i++)
		  {
			  for(j=0;j<q;j++)
			  
			  printf("%5d", C[i][j]);
		  }
	  }
	  return 0;
  }
