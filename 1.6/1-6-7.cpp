#include <stdio.h>
#include <math.h>
void main()
{
	int i,j,p,k=0,a[50],l=0;
	for(i=2;i<=100;i++)
	{
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
				l=1;
		}if(l==0)
		{
			a[k]=i;
			k++;
		}
		l=0;	
	}
}