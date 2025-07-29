#include<stdio.h>
#include<stdlib.h>
#define NULL 0
struct student
{
	long num;
	float score;
	struct student *next;
};
void main()
{
	int i;
	float *t;
	struct student stu[10],*p;
	p=stu;
	t=&stu[0].score;
	*t=0;
	for(i=0;i<=8;i++)
	{
		printf("enter NO.%d:",i+1);
		scanf("%ld,%f",&stu[i].num,&stu[i].score);
		stu[i].next=&stu[i+1];
	}
	printf("enter NO.%d:",i+1);
	scanf("%ld,%f,&stu[i].num,&stu[i].score");
	stu[i].next=NULL;
	do
	{
		printf("%ld\t%f\n",p->num,p->score);
		p=p->next;
	}while(p!=NULL);
}