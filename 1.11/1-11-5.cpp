#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    int num, count = 0;


    if ((fp = fopen("exe.txt", "r")) == NULL)
    {
        printf("打不开文件\n");
        exit(0);
    }

    while (fscanf(fp, "%d", &num) != EOF)
    {
        printf("%d ", num);
        count++;
        if (count % 10 == 0)
            putchar('\n');
    }

    fclose(fp);

    return 0;
}
