#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	for(b=5; b>=1; b--)
	{ 
		for(c=1; c<=b; c++)
		{ 
		    printf(" ");
		}
		for(a=5; a>=b; a--)
		{
			printf("%d",a);
		}
		printf("\n");
	}
}