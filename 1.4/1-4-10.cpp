#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,p,s;
	printf("������3��ʵ����");
	scanf("%f,%f,%f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		p=(a+b+c)/2;
		s=p*(p-a)*(p-b)*(p-c);
		s=sqrt(s);
		printf("���������Ϊ%.2f\n",s);
	}
	else printf("�޷�����������\n");
}