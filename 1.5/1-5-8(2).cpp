#include <stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=4-i;j++)
			printf("   ");
		for(j=1;j<=2*i-1;j++)
			printf(" %d ",i);
		printf("\n");
	}
}