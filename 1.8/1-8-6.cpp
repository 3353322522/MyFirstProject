#include<stdio.h>
void main()
{
	int num[10],i,dnum[10],di;
	int *p;
	p=num;
	for(i=0;i<=9;i++)
	{
		scanf("%d",p+i);
	}
	di=0;
	for(i=0;i<=9;i++)
	{
		if(num[i]%2==0)
		{	
			dnum[di]=num[i];
			di=di+1;		
		}
			
	}
	printf("\n");
	p=dnum;
	for(i=0;i<di;i++)
	{
		printf("%d\n",dnum[i]);
	}
}