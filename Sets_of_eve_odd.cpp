#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			printf("\nEven- %d",arr[i]);
		}
		else
		{
			printf("\nOdd- %d",arr[i]);
		}
	}
}