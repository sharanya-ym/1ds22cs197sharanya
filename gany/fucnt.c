#include<stdio.h>
int add(int a, int b);
int main()
{
	int a, b, sum;
	a=10;
	b=20;
	sum=add(a,b);
	printf("sum=%d\n", sum);
	return 0;
}
	int add(int a,int b)
	{
		int sum;
		sum=a+b;
		return sum;
	}
		
