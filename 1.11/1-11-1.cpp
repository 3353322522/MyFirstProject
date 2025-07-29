#include<stdio.h>
void main()
{
	FILE *fp;
	char str[40];
	fp=fopen("myfile.txt","r");
	fgets(str,5,fp);
	printf("%s\n",str);
	fclose(fp);
}