#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,p,s;
	printf("请输入3个实数：");
	scanf("%f,%f,%f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		p=(a+b+c)/2;
		s=p*(p-a)*(p-b)*(p-c);
		s=sqrt(s);
		printf("三角形面积为%.2f\n",s);
	}
	else printf("无法构成三角形\n");
}