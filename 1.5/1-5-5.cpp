#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<=10;i++)
	{
		j=i*10+3;
		if(j%3!=0)
			continue;
		printf("%4d",j);
	}

}
