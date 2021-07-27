#include<stdio.h>
void first_part(int ar[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(ar[j+1]<ar[j])
			{
				int temp=ar[j+1];
				ar[j+1]=ar[j];
				ar[j]=temp;
			}
		}
	}
}
void second_part(int ar[],int n)
{
for(int i=n/2;i<n-1;i++)
{
	for(int j=n/2;j<n-1;j++)
	{
		if(ar[j+1]>ar[j])
		{
			int temp=ar[j+1];
			ar[j+1]=ar[j];
			ar[j]=temp;
		}
	}
	}	
}
int main()
{
	int n;
	scanf("%d",&n);
	int ar[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	first_part(ar,n/2);
	second_part(ar,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	return 0;
}
