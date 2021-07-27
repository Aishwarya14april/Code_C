#include<stdio.h>
int main()
{
	int n,k1,k2;
	scanf("%d",&n);
	int ar[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter the kth smallest and kth largest element: ");
	scanf("%d %d",&k1,&k2);
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(ar[j+1]<ar[j]){
				int temp=ar[j+1];
				ar[j+1]=ar[j];
				ar[j]=temp;
			}
		}
	}
	printf("%d %d",ar[k1-1],ar[n-k2]);
	
	
}
