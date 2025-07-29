#include<stdio.h>
#include<string.h>
struct student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
};
void main()
{
	struct student a,b={12345,"hejin",'m',99,91.50,"chongqing"};
	printf("enter num:");scanf("%d",&a.num);
	printf("enter name:");scanf("%s",&a.name);
	printf("enter sex:");scanf("%*c%c",&a.sex);
	printf("enter age:");scanf("%d",&a.age);
	printf("enter score:");scanf("%f",&a.score);
	printf("enter addr:");scanf("%s",a.addr);
	printf("%d %s %c %d %f %s\n",a.num,a.name,a.sex,a.age,a.score,a.addr);
	printf("%d %s %c %d %f %s\n",b.num,b.name,b.sex,b.age,b.score,b.addr);
}