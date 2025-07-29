#include <stdio.h>
struct Student 
{
    int id;
    char name[20];
    float chinese_score;
    float math_score;
    float english_score;
};

int main() 
{
    struct Student s;

    printf("请输入学生的学号：");
    scanf("%d", &s.id);
    printf("请输入学生的姓名：");
    scanf("%s", s.name);
    printf("请输入学生的语文成绩：");
    scanf("%f", &s.chinese_score);
    printf("请输入学生的数学成绩：");
    scanf("%f", &s.math_score);
    printf("请输入学生的英语成绩：");
    scanf("%f", &s.english_score);

    float avg_score = (s.chinese_score + s.math_score + s.english_score) / 3;

    printf("学号：%d\n", s.id);
    printf("姓名：%s\n", s.name);
    printf("语文成绩：%0.2f\n", s.chinese_score);
    printf("数学成绩：%0.2f\n", s.math_score);
    printf("英语成绩：%0.2f\n", s.english_score);
    printf("平均成绩：%0.2f\n", avg_score);

    return 0;
}
