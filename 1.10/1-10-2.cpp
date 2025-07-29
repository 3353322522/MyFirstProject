#include<stdio.h>
#include<string.h>
struct person
{
	char stuno[8];
	char name[10];
	int age;
};
void main()
{
	int i;
	struct person stu[4];
	for(i=0;i<4;i++)
	{
		printf("enter %dNo.:",i+1);scanf("%s",&stu[i].stuno);
		printf("enter %dname:",i+1);scanf("%s",&stu[i].name);
		printf("enter %dage:",i+1);scanf("%d",&stu[i].age);
		printf("\n");
	}
	printf("\nNo.\t\tName\t\t\tAge\n");
	for(i=0;i<4;i++)
		printf("%s\t\t%-9s\t\t%-d\n",stu[i].stuno,stu[i].name,stu[i].age);
}