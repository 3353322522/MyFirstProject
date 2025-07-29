#include <stdio.h>
#define N 9
void main()
{
	int i,a[N]={1,2,3,4,5,6,7,8,9};
	for(i=0;i<N;i++)
	{
		if(i%3==0&&i!=0)
			printf("\n");
		printf("%4d",a[i]);
	}
	printf("\n");
}