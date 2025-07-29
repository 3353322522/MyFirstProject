#include <stdio.h>
#define N 10
void main()
{
	int i,a[N];
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	{
		if(i%5==0&&i!=0)
			printf("\n");
		printf("%11d",a[i]);
	}
	printf("\n");
}