#include <stdio.h>
void main()
{
	char c;
	scanf("%c",&c);
	if(c<'a') c=c+32;
	else c=c-32;
	printf("%c\n",c);
}