#include <stdio.h>

#define N 8000
#define M 5

static int a[N] = {1, 1, 1, 1, 1};

int main()
{
    register int i, j;

    for(j = M; j < N; ++j)
        a[j] += a[j - 1];

    for(j = 5; j < N; ++j)
        a[j] += a[j - 5];

    for(j = 10; j < N; ++j)
        a[j] += a[j - 10];

    for(j = 25; j < N; ++j)
        a[j] += a[j - 25];

    for(j = 50; j < N; ++j)
        a[j] += a[j - 50];

    int n;
    while(scanf("%d", &n) == 1)
        printf("%d\n", a[n]);

    return 0;
}
