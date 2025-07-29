#include <stdio.h>
#include <string.h>

struct Student 
{
    char id[12];
    char name[9];
    int year, month, day;
};

int main() 
{
    struct Student member[3] = 
	{
        {"11103070201", "李明", 1994, 12, 14},
        {"11103070202", "王丽", 1994, 3, 20},
        {"11103070203", "赵小勇", 1993, 6, 18}
    };

    char no[12];
    printf("请输入要搜索的学号：");
    gets(no);

    for (int i = 0; i < 3; i++) 
	{
        if (strcmp(member[i].id, no) == 0) 
		{
            printf("%s,%s,%d-%d-%d\n", member[i].id, member[i].name,
                   member[i].year, member[i].month, member[i].day);
            break;
        }
    }

    return 0;
}
