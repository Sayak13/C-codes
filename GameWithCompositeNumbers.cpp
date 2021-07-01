#include<stdio.h>

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n<4)
		printf("-1");
	
	else if(n%4 == 0)
		printf("%d",n/4);
	
	else if(n%4 == 1)
	{
		if(n<9)
			printf("-1");
		else
			printf("%d",(n-9)/4+1);
	}
	
	else if(n%4 == 2)
		printf("%d",(n-6)/4+1);
	
	else
	{
		if(n<15)
			printf("-1");
		else
			printf("%d",(n-15)/4+2);
	}
}
