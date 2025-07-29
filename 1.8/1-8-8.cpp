#include<stdio.h>
void main()
{
	char s[]="student";
	char *t="teacher",*p;
	p=s;
	while(*t!='\0')
		*p++=*t++;
	printf("%s\n",s);
}