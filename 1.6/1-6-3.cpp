#include <stdio.h>
void main ()
{
	int i,a[10];
	for(i=0;i<10;i++)
		a[i]=i+1;
	for(i=0;i<5;i++)
		a[9-i]=a[i];
	for(i=0;i<10;i++)
		printf("%4d",a[i]);
}
