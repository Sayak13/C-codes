#include<stdio.h>
#include<stdlib.h>

int MakeOver(int r,int c,int a[20][20],int b[20][20])
{
	int i,j,count=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			a[i][j] -= b[i][j];
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if (a[i][j]-a[i][0]-a[0][j]+a[0][0]!=0)
				return -1;
		}
	}
    for (int i = 0; i < r; i++)
    {
        count += abs(a[i][0]);
    }
    for (int j = 0; j < c; j++)
    {
        count += abs(a[0][j]-a[0][0]);
    }
    return count;
}

int main()
{
	int r,c,i,j,s;
	int a[20][20],b[20][20];
	printf("Enter the no of rows and columns:");
	scanf("%d %d",&r,&c);
	printf("Enter the elements of 1st array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
	
	printf("Enter the elements of 1st array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&b[i][j]);
	}
	s=MakeOver(r,c,a,b);
	printf("%d",s);
}
