#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch,filename[10];
	printf("Please input filename:");
	scanf("%s",filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	printf("Please input string:");
	ch=getchar();
	while(ch!='#')
	{
		fputc(ch,fp);
		putchar(ch);
		ch=getchar();
	}
	fclose(fp);
}