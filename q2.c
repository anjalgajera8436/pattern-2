#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	for(b=1; b<=5; b++)
	{
		for(c=5; c>=b; c--)
		{ 
		    printf(" ");
		}
		for(a=b; a>=1; a--)
		{
			printf("%d",a);
		}
		printf("\n");
	}
}