#include <stdio.h>
#define N 10
#define TEST 0

int main() 
{
    int i, max, a[N];
    #if TEST
    for (i = 0; i < N; i++)
        a[i] = 10 + i;
    #else
    for (i = 0; i < N; i++) 
	{
        scanf("%d", &a[i]);
        while (getchar() != '\n');
    }

    max = a[0];
    for (i = 1; i < N; i++)
        if (a[i] > max)
            max = a[i];

    printf("Max=%d\n", max);
    #endif
    
    return 0;
}
