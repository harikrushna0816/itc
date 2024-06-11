#include<stdio.h>
int main()
{
	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	int m = n;
	for(int i=1;i<=n;i++)
	{
	for(int i = 1;i<=m-1;j++)
	{
		printf(" ");
	}
	for(intk=1;k<=2*i-1;k++){
		printf("*");
	}
	m--;
	printf("\n");
}
return 0;
}
