#include <stdio.h>
void main()
{
	int m,n,t,k,p;
	printf("m=");
	scanf("%d",&m);
	printf("n=");
	scanf("%d",&n);
	if(m<n)
	{k=m;m=n;n=k;}
	k=m;
	p=n;
	while(n!=0)
	{
		t=n;
		n=m%n;
		m=t;
	}
	printf("最大公约数：%d\n",m);
	printf("最小公倍数：%d\n",k*p/m);
}