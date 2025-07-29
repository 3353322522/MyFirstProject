#include <stdio.h>
void main()
{
	int i,j,sum=0;
	for(i=1;i<=100;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				sum+=j;
		}
		if(sum==i)
			printf("%4d",sum);
		sum=0;
	}
}
