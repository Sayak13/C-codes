#include<stdio.h>
int main()
{
	int n,i;
	int arr[10];
	int arr1[10]={2000,500,200,100,50,20,10,5,2,1};
	printf("Enter the total saving amount:");
	scanf("%d",&n);
	if(n>0 && n<=25000)
	{
		for(i=0;i<10;i++)
		{
			arr[i]=n/arr1[i];
			n=n%arr1[i];
		}
		for(i=0;i<10;i++)
			printf("%d ",arr[i]);
	}
	else
		printf("The amount is invalid.");
	
}
