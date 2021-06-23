#include<stdio.h>
#include<stdlib.h>

void check_error(int arr[],int i)
{
	int n;
	for(n=0;n<=i;n++)
	{
		if(arr[n]<=0)
		{
			printf("\nError");
			exit(0);
		}
	}
}

void count_egg(int arr[],int i)
{
	int n,count=0;
	for(n=0;n<=i;n++)
	{
		if(arr[n]>=52)
			count += 16;
		else if(48<arr[n]<52)
			count +=(arr[n]+4-52)*4;
		 
	}
	printf("%d",count);
}

int main()
{
	int n,i=0;
	int arr[100];
	char temp;
	printf("Enter the age of the swans:\n");
	do
	{
		scanf("%d%c",&arr[i],&temp);
		i++;
	}while(temp != '\n');
	check_error(arr,i-1);
	count_egg(arr,i-1);
}
