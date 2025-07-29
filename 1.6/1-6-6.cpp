#include <stdio.h>
void main ()
{
	int i,a[10];
	float m=0;
	printf("请输入10个学生的成绩：");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	 	m=m+a[i];
	}
	printf("低于平均分的同学成绩有：");
	for(i=0;i<10;i++)
	{
		if(a[i]<m/10)
			printf("%d ",a[i]);
	}
	printf("\n");
}