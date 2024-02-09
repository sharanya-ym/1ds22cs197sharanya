#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[100], s2[100];
	int ch;
	printf("Enter the characters\n");
	scanf("%s%s",s1, s2);
	ch=strcmp(s1, s2);
	printf("%d", ch);
	return 0;
}
