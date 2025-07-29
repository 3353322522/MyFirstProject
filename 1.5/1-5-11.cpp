#include <stdio.h>
void main()
{
	char ch[100];
	int i=0;
	gets(ch);
	while(i<=100)
	{
		if(ch[i]<='z'&&ch[i]>='a')
			ch[i]-=32;
		i++;
	}
	puts(ch);
}
