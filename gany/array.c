#include<stdio.h>
int main()
{
	int a[10],n, i;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	printf("Enter n elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The N elemenrs are:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
	}
	
