#include <stdio.h>
struct student 
{
    char num[6];
    char name[9];
    int score[3];
    float avr;
};

int main() 
{
    struct student stu[5];
    int i, j, max = 0, maxi = 0;

    for (i = 0; i < 5; i++) 
	{
        printf("\n请输入学生%d的成绩:\n", i + 1);
        printf("学号:");
        scanf("%s", stu[i].num);
        printf("姓名:");
        scanf("%s", stu[i].name);

        int sum = 0;
        for (j = 0; j < 3; j++) 
		{
            printf("%d成绩:", j + 1);
            scanf("%d", &stu[i].score[j]);
            sum += stu[i].score[j];
        }
        stu[i].avr = sum / 3.0;
        if (sum > max) 
		{
            max = sum;
            maxi = i;
        }
    }

    printf("     学号      姓名   平均分\n");
    for (i = 0; i < 5; i++) {
        printf("%8s %8s", stu[i].num, stu[i].name);
        printf("%10.2f\n", stu[i].avr);
    }

    printf("总分最高的学生是:%s, 其学号为%s，其总分是:%d\n",
           stu[maxi].name, stu[maxi].num, max);

    return 0;
}
