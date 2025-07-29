#include<stdio.h>
#include<math.h>
void main()
{
	int n,i=2;
	int l=0;
	for(n=2;n<100;n++)
	{
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
			l=1;
		if(l!=1)
			printf("%4d",n);
	    l=0;
	}
	puts("\n");
}