#include <stdio.h>
void main()
{
	float PI=3.1415926;
	float r,h,s,v;
	printf("please input r,h:");
	scanf("%f,%f",&r,&h);
	s=PI*r*r;
	v=s*h;
	printf("area=%f,volume=%f\n",s,v);
}