#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%21!=0)
			continue;
		printf("%4d",i);
	}

}
