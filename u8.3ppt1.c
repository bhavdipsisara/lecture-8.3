#include<stdio.h>

int main()
{
	int x,y,n;
	
	
	printf("enter the value of x=");
	scanf("%d",&x);
	
	printf("enter the value of y=");
	scanf("%d",&y);
	
	int a[x][y];
	int i,j,sum=0,avg,lenght;
	lenght=sizeof(a)/sizeof(a[0][0]);
	printf("length of 2d array %d\n",lenght);
	printf("\n enter arrya element =\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d",a[x][y]);
			sum=sum+a[i][j];
		}
		printf("\n");
		
    }
    
    printf("\n sum of the element %d\n",sum);
    avg=sum/lenght;
    printf("avg of arrya =%d\n",avg);
    
	
}