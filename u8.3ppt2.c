#include<stdio.h>

int main()
{
	int x,y;
	printf("enter the value of x=");
	scanf("%d",&x);
	
	printf("enter the value of y=");
	scanf("%d",&y);
	
	int a[x][y];
	int sum[x][y];
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int b[x][y];
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d ",&b[i][j]);
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",sum[i][j]);
			
		}
		printf("\n");
	}
	
	
}