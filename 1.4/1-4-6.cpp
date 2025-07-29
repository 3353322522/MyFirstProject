#include<stdio.h>
#include<math.h>
void main()
{
	float x,y;
	printf("input x:");
	scanf("%f",&x);
	if(x<5)
	{
		y=fabs(x);
		printf("x=%.2f,y=fabs(x)=%.2f\n",x,y);
	}
	else if(x>=5&&x<10)
	{
		y=pow(x,3);
		printf("x=%.2f,y=pow(x,3)=%.2f\n",x,y);
	}
	else
	{
		y=sqrt(x);
		printf("x=%.2f,y=sqrt(x)=%.2f\n",x,y);
	}
}