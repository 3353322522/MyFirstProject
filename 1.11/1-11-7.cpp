#include<stdio.h>
#define SIZE 2
struct student_type
{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];
void save()
{
	FILE *fp;
	int i;
	if((fp=fopen("d:\stu_dat","wb"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	for(i=0;i<SIZE;i++)
		if(fwrite(&stud[i],sizeof(struct student_type),1,fp)!=1)
			printf("file write error\n");
		fclose(fp);
}
void display()
{
	FILE *fp;
	int i;
	if((fp=fopen("d:\stu_dat","rb"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	for(i=0;i<SIZE;i++)
	{
		fread(&stud[i],sizeof(struct student_type),1,fp);
		printf("%-10s %4d %4d % -15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	}
	fclose(fp);
}
void main()
{
	int i;
	for(i=0;i<SIZE;i++)
	scanf("%s%d%d%s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
	save();
	display();
}