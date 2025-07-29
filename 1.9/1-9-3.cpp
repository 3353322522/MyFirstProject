#include<stdio.h>
#define EX(a,b) {a=a+b; b=a-b; a=a-b;}
int main()
{
    int x=2,y=5;
    EX(x,y);
    printf("x=%d,y=%d\n",x,y);
    return 0;
}
