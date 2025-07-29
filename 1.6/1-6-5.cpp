#include <stdio.h>
#include <math.h>
void main()
{
	int i,j,a[10],t;
	printf("ÇëÊäÈë10¸öÊı£º");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(j=1;j<10;j++)
	{
		if(a[j]>a[j-1])
		{
			t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
		}
	}
	printf("min=%d\n",a[9]);
	for(j=1;j<10;j++)
	{
		if(a[j]<a[j-1])
		{
	    	t=a[j];
	    	a[j]=a[j-1];
		    a[j-1]=t;
		}
	}
	printf("max=%d\n",a[9]);
}