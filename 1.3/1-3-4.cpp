#include <stdio.h>
void main()
{
	float c,f;
	printf("请输入一个华氏温度：");
	scanf("%f",&f);
	c=5*(f-32)/9;
	printf("华氏温度F=%.2f\n",f);
	printf("摄氏温度c=%.2f\n",c);
}