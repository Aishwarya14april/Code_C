#include<stdio.h>
void fun(int ar[],int size)
{
	for(int i=0,j=0;i<size;i++)
	{
		if(ar[i]%2!=0)
		{
			int temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
			j++;
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
	fun(ar,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	return 0;
}
