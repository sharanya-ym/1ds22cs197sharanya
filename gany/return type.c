#include<stdio.h>
int add();
int main()
{
	int sum;
	sum=add();
	printf("sum=%d\n", sum);
	return 0;
}
int add()
{
	int a, b, sum;
	a=10;
	b=20;
	sum=a+b;
	return sum;
}
