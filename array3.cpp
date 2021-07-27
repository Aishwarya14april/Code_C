#include<stdio.h>
int main()
{
	int x,y,ctr=0,opt=0,sum=0;
	printf("Enter the number of rows and columns: ");
	scanf("%d %d",&x,&y);
	int ar[x][y];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			scanf("%d",ar[i][j]);
		}
	}
	printf("Enter the option: ");
	scanf("%d",&opt);
	switch(opt)
	{
	case 1:
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			if(ar[i][j]==0)
			ctr++;
		}
	}
	break;
	case 2:
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			if(i<j)
			sum=sum+ar[i][j];
		}
	}
	break;
	case 3:
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			if(i=j)
			printf("%d ",ar[i][j]);
		}
	}
	break;
	case 4:
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("%d ",ar[i][j]);
		}
	}
	break;
	case 5:
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("%d ",ar[j][i]);
		}
	}
	break;
	default:
		printf("The option chosen doesn't exist\n");
	}
	return 0;
}  
