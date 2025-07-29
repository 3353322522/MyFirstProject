#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int i, num;

    if ((fp = fopen("output.txt", "w")) == NULL)
    {
        printf("打不开文件\n");
        exit(0);
    }

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        fprintf(fp, "%d ", num);
    }


    fclose(fp);

    return 0;
}
