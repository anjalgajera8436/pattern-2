#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	
	for(i=5; i>=2; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}