#include<stdio.h>
#include<stdlib.h>

struct node
{
	int N;
	int B;
	int arr[10];
	struct node* next;
};

struct node* start=NULL;

struct node *create_node()
{
	int i;
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node));
	printf("Enter the no of shirts and budget:");
	scanf("%d %d",&t->N,&t->B);
	printf("Enter the price of the shirts:");
	for(i=0;i<t->N;i++)
		scanf("%d",&t->arr[i]);
	t->next=NULL;
	return t;
}

void create_element()
{
	struct node *n,*temp;
	n=create_node();
	if(start==NULL)
	{
		start=n;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=n;
	}
}

void shirt_count()
{
	struct node* temp=start;
	int i,j,n,b,count,a=1;
	while(temp!=NULL)
	{
		if(temp->B>=100000 || temp->N>=100)
		{
			printf("Case#%d:Invalid Input\n",a);
		}
		else
		{
			count=0;
			b=temp->B;
			for(i=0 ; i<temp->N ; i++)
			{
				for(j=i+1 ; j<temp->N ; j++)
				{
					if(temp->arr[i] > temp->arr[j])
					{
							n = temp->arr[i];
						temp->arr[i] = temp->arr[j];
						temp->arr[j] = n;
					}	
				}
				b=b-temp->arr[i];
				
				if(temp->arr[i]<=0)
				{
					printf("Case#%d:Invalid Input\n",a);
					break;
				}
				
				 else if(b>=0 && i<temp->N-1)
					count=count+1;
				
				else if(b>=0 && i==temp->N-1)
				{
					count=count+1;
					printf("Case#%d:%d\n",a,count);
					break;
				}
				
				else
				{
					printf("Case#%d:%d\n",a,count);
					break;
				}
			}
		}
		temp=temp->next;
		a=a+1;
	}
}

int main()
{
	int n,i;
	printf("Enter the no of test cases:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("case %d\n",i+1);
		create_element();
	}
	printf("\n");
	shirt_count();
}
