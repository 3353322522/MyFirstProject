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
        printf("\n������ѧ��%d�ĳɼ�:\n", i + 1);
        printf("ѧ��:");
        scanf("%s", stu[i].num);
        printf("����:");
        scanf("%s", stu[i].name);

        int sum = 0;
        for (j = 0; j < 3; j++) 
		{
            printf("%d�ɼ�:", j + 1);
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

    printf("     ѧ��      ����   ƽ����\n");
    for (i = 0; i < 5; i++) {
        printf("%8s %8s", stu[i].num, stu[i].name);
        printf("%10.2f\n", stu[i].avr);
    }

    printf("�ܷ���ߵ�ѧ����:%s, ��ѧ��Ϊ%s�����ܷ���:%d\n",
           stu[maxi].name, stu[maxi].num, max);

    return 0;
}
