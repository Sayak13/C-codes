#include<stdio.h>
#include<stdlib.h>

void check_error(float a[5],int b[2])
{

	if(a[1]<=a[0] || a[1]<=a[2] || a[1]<=a[3] || a[1]<=a[4] || b[0]<0 || b[0]>12 || b[1]<0)
	{
		printf("\n Error");
		exit(0);
	}
}

void daily_expenses(float a[5])
{
	int i;
	float s=0;
	for(i=0;i<5;i++)
	{
		s+=a[i];
	}
	printf("\n%f",s);
}

void monthly_expenses(float a[5],int b[2])
{
	int i;
	float s=0;
	for(i=0;i<5;i++)
	{
		s+=a[i];
	}
	switch (b[0])
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			s=(s*31);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			s=(s*30);
			break;
		case 2:
			if( b[1] % 400 == 0)
			{
				s=(s*29);
			}
			else if( b[i] % 100 != 0 && b[1] % 4 == 0)
			{
				s=(s*29);
			}
			else
			{
				s=(s*28);
			}
	}
	printf(" %f",s);
}

int main()
{
	float a[5];
	int b[2];
	int i;
	printf("Enter the cost of milk, non-veg, fruits, grocery, Vegetables and the moth index and year\n");
	for(i=0;i<5;i++)
		scanf("%f",&a[i]);
	for(i=0;i<2;i++)
		scanf("%d",&b[i]);
	check_error(a,b);
	daily_expenses(a);
	monthly_expenses(a,b);
}
