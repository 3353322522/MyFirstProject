#include <stdio.h>
void main ()
{
	int i,a[10];
	float m=0;
	printf("������10��ѧ���ĳɼ���");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	 	m=m+a[i];
	}
	printf("����ƽ���ֵ�ͬѧ�ɼ��У�");
	for(i=0;i<10;i++)
	{
		if(a[i]<m/10)
			printf("%d ",a[i]);
	}
	printf("\n");
}