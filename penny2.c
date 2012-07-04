#include <cs50.h>
#include <stdio.h>
int
main(void)
{
	int a=0,c=0,d=0,i=0;
	printf("Enter the no of pennies owed\n");
	scanf("%d",&a);
	if(i=0)
	{
	while(a>0)
		{
			a=a/25;
			c=a%25;	
			d=d+a;	
			
		}
		a=c;
		i=1;
	}
	if(i=1)
	{
	while(a>0)
		{
			a=a/10;
			c=a%10;	
			d=d+a;	
		}
		a=c;
		i=2;
	}
	if(i=2)
	{
	while(a>0)
		{
			a=a/5;
			c=a%5;	
			d=d+a;	
		}
		a=c;
		i=3;
	}
	if(i=3)
	{
	while(a>0)
		{
			a=a/1;
			c=a%1;	
			d=d+a;	
			
		}
		i=4;
	}
	printf("No of coins used is:");
	printf("%d\n",d);
	end(1);
}


