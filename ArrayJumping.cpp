#include <stdio.h> 
#include <limits.h> 
  
int minJumps(int arr[], int l, int h) 
{
	if (h == l) 
		return 0; 

	if (arr[l] == 0) 
    	return INT_MAX;

	int min = INT_MAX; 
	for (int i = l+1; i <= h && i <= l + arr[l]; i++) 
	{ 
    	int jumps = minJumps(arr, i, h); 
    	if(jumps != INT_MAX && jumps + 1 < min) 
			min = jumps + 1; 
	} 
  
	return min; 
} 

int main() 
{
	int n,i;
	printf("Enter the length of the array\n");
	scanf("%d",&n);
	int arr[n]; 
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Minimum number of jumps to reach end is %d ", minJumps(arr, 0, n-1)); 
	return 0; 
} 
