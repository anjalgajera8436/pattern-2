#include<stdio.h>
#include<conio.h>

void main()
{
	int b,a,c;
	
	for(b=5; b>=1; b--)
	{
			for(c=b; c<=4; c++)
			{
				printf(" ");
			}
	    	for(a=b; a>=1; a--)
		   {
			if(a%2==0)
			{
			  printf("0");	
			}
			else
			{
			  printf("1");
			}
			
		}
		printf("\n");
	}
}