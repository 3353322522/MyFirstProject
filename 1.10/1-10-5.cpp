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

    printf("������ѧ����ѧ�ţ�");
    scanf("%d", &s.id);
    printf("������ѧ����������");
    scanf("%s", s.name);
    printf("������ѧ�������ĳɼ���");
    scanf("%f", &s.chinese_score);
    printf("������ѧ������ѧ�ɼ���");
    scanf("%f", &s.math_score);
    printf("������ѧ����Ӣ��ɼ���");
    scanf("%f", &s.english_score);

    float avg_score = (s.chinese_score + s.math_score + s.english_score) / 3;

    printf("ѧ�ţ�%d\n", s.id);
    printf("������%s\n", s.name);
    printf("���ĳɼ���%0.2f\n", s.chinese_score);
    printf("��ѧ�ɼ���%0.2f\n", s.math_score);
    printf("Ӣ��ɼ���%0.2f\n", s.english_score);
    printf("ƽ���ɼ���%0.2f\n", avg_score);

    return 0;
}
