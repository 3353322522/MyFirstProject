#include<stdio.h>
void main()
{
	struct shn{char *name;int old;int salary;};
	struct shn member1,member2,member3;
	member1.name="李  明";member1.old=25;member1.salary=2500;
	member2.name="王  丽";member2.old=22;member2.salary=2300;
	member3.name="赵小勇";member3.old=30;member3.salary=3000;
	printf("%10s,%2d,%4d元\n",member1.name,member1.old,member1.salary);
	printf("%10s,%2d,%4d元\n",member2.name,member2.old,member2.salary);
	printf("%10s,%2d,%4d元\n",member3.name,member3.old,member3.salary);
}