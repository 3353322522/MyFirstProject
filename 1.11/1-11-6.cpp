#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	FILE *fp;
	char string[100];
	int i=0;

	if((fp=fopen("test.dat","w"))==NULL)
	{
		printf("�򲻿��ļ�\n");
		exit(0);
	}

	printf("����һ���ַ���:");
	fgets(string,99,stdin);
	while(string[i]!='\0')
	{
		if(string[i]>='a'&&string[i]<='z')
		{
			string[i]-=32; 
		}
		fputc(string[i],fp); 
		i++;
	}

	fclose(fp); 
	printf("�ļ��ѱ���\n");
}
