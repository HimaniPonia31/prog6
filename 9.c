#include<stdio.h>
void main()
{
	int n,k,array[n],sum=0,i;
	printf("enter two no");
	scanf("%d%d",&n,&k);
	for(i=1;i<=k;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}

