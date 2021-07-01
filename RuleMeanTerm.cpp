#include<stdio.h>
#include<stdlib.h>

int compute(int N,int P,int i,int A[])
{
	int s;
	if(i==0 && P==0)
	{
		s=A[0]*2+A[1]*1;
		return s;
	}
	
	else if(i==0 && P==1)
	{
		s=4*A[N-1]+2*A[0]+1*A[1];
		return s;
	}
	
	else if(i==N-1 && P==0)
	{
		s=4*A[i-1]+2*A[i];
		return s;
	}
	
	else if(i==N-1 && P==1)
	{
		s=4*A[i-1]+2*A[i]+A[0];
		return s;
	}
	
	else
	{
		s=4*A[i-1]+2*A[i]+1*A[i+1];
		return s;
	}
}

int main()
{
	int N,P,i,s;
	printf("Enter the length of the string and pattern:");
	scanf("%d %d",&N,&P);
	if(N>100)
	{
		printf("Error");
		exit(0);
	}
	else if(P!=0 && P!=1)
	{
		printf("Error");
		exit(0);
	}
	int A[N];
	int RMT[N];
	printf("Enter the elements of the array:");
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
		if(A[i]!=0 && A[i]!=1)
		{
			printf("Error");
			exit(0);
		}
	}
	for(i=0;i<N;i++)
	{
		s=compute(N,P,i,A);
		RMT[i]=s;
		printf("%d ",s);
	}
}
