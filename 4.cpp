#include<stdio.h>
#include<stdlib.h>


void check_error(int n,int arr[])
{
	int i,s,k=1;
	for(i=0;i<n;i++)
	{
		s=arr[i];
		while(s/10 != 0)
		{
			s=s/10;
			k=k+1;
		}
		if(k>10)
		{
			printf("Error");
			exit(0);
		}
	}
}

void check(int n,int arr[])
{
	int i,s,j,l,d,p=1,q=1,k=0;
	int a[10];
	for(i=0;i<n;i++)
	{
		if(arr[i]<=0)
			printf("Error ");
		else
		{
		s=arr[i];
		j=0;
		while(s/10 != 0)
		{
			a[j]=s%10;
			s=s/10;
			k=k+1;
			j=j+1;
		}
		a[j]=s;
		d=1;
		for(l=j;l>=0;l--)
		{
			if(d%2==0)
				p=p*a[l];
			else
				q=q*a[l];
				d=d+1;	
		}
		if(p<q)
			printf("Magical ");
		else
			printf("Dominant ");
		}
	}
}

int main()
{
	int n,i;
	int arr[n];
	printf("How many numbers you want to insert:");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	check_error(n,arr);
	check(n,arr);
}
