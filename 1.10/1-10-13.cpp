#define NULL 0
#define LEN sizeof(struct student)
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
struct student
{
	long num;
	int score;
	struct student *next;
};
/****创建链表****/
struct student *create(void)
{
	struct student *head,*p1,*p2;
	printf("enter link table:(if 0,0is end)\n");
	p1=p2=(struct student *)malloc(LEN);
	scanf("%ld,%d",&p1->num,&p1->score);
	if(p1->num==0&&p1->score==0)
		head=NULL;
	else
		head=p1;
	while(p1->num!=0&&p1->score!=0)
	{
		p1=(struct student *)malloc(LEN);
		scanf("%ld,%d",&p1->num,&p1->score);
		if(p1->num==0&&p1->score==0)
			break;
		else
		{
			p2->next=p1;
			p2=p1;
		}
	}
	p2->next=NULL;
	return(head);
}
/****打印链表****/
void print(struct student *head)
{
	struct student *p;
	printf("\n print link table is:\n");
	p=head;
	if(head!=NULL)
	do
	{
		printf("%ld\t %ld\n",p->num,p->score);
		p=p->next;
	}while(p!=NULL);
}
/****删除结点****/
struct student *del(struct student *head,long n)
{
	struct student *p1,*p2;
	p1=head;
	if(head==NULL)
	{
		printf("link table is void!");
		return(head);
	}
	if(p1->num!=n&&p1->next!=NULL)
	{
		p2=p1;
		p1=p1->next;
	}
	if(p1->num==n)
	{
		p2->next=p1->next;
		printf("%ld is found! already deleted it\n",n);
	}
	else
		printf("%ld is not found!",n);
	return(head);
}
/****插入结点****/
struct student *insert(struct student *head,struct student *stu)
{
	struct student *p0,*p1,*p2;
	p1=head;
	p0=stu;
	if(head==NULL)
	{
		head=p0;
		p0->next=NULL;
		return(head);
	}
	if(p0->num>=p1->num)
	{
		head=p0;
		p0->next=p1;
	}
	while(p0->num>p1->num&&p1->next!=NULL)
	{
		p2=p1;
		p1=p1->next;
	}
	if(p0->num<=p1->num)
	{
		p2->next=p0;
		p0->next=p1;
	}
	else
	{
		p1->next=p0;
		p0->next=NULL;
	}
	return(head);
}
void main()
{
	struct student *p,*stu;
	long num=1;
	p=create();
	print(p);
	/*以下是删除操作*/
	do
	{
		printf("enter delete num(enter 0 exit):");
		scanf("%ld",&num);
		if(num==0||p==NULL)
			break;
		p=del(p,num);
			print(p);
	}while(1);
	/*以下是插入操作*/
	printf("enter New link:\n");
	scanf("%ld,%d",&stu->num,&stu->score);
	p=insert(p,stu);
	print(p);
}