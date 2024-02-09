#include<stdio.h>
int main()
{
	int n, i, count=0;
	printf("Enter n:\n");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("n is prime number:\n");
	}
	else
	{
		printf("n is not a prime number");
	}
	return 0;
}
