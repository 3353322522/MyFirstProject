#include <stdio.h>
#define N 8
void main ()
{
	int a[N],i,j,t;
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0,j=N-1;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	for(i=0;i<N;i++)
		printf("%4d",a[i]);
	printf("\n");
}