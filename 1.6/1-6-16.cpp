#include <stdio.h>
#define N 80
void main()
{
	char s1[N*2],s2[N];
	int i=0,j=0;
	printf("\n�����������ַ������Կո��س����ַ���������־:\n");
	scanf("%s",&s1);
	scanf("%s",&s2);
	while(s1[i]!='\0')
		i++;
	while(s2[j]!='\0')
		s1[i++]=s2[j++];
	s1[i]='\0';
	printf("\n���Ӻ�������ַ���Ϊ��\n%s\n",s1);
}