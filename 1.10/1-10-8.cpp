#include<stdio.h>
void main()
{
	enum num{a,b,c=21,d,e,f};
	enum num w,x,y,z;
	w=a;
	x=b;
	y=c;
	z=e;
	printf("w=%d,x=%d,y=%d,z=%d\n",w,x,y,z);
}