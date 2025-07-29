#include <stdio.h>
void main()
{
	int i,j,t,sum=0;
	for(i=0;i<100/3+1;i++)
		for(j=0;j<100/2+1;j++)
			for(t=0;t<100+1;t+=2)
				if(i+j+t==100&&3*i+2*j+t/2==100)
					sum++;
	printf("共有%d种解法\n",sum);
}