#include <stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i-1;j++)
			printf("   ");
		for(j=1;j<=(5-i)*2-1;j++)
			printf(" * ");
		printf("\n");
	}
}