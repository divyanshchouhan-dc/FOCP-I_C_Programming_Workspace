#include <stdio.h>
void star(int n, int m)
{
    for (int j = 1; j <= 2 * n; j += 2)
    {
        for (int i = 1; i <= j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n, m;
    scanf("%d", &n);
    // scanf("%d", &m);
    star(n, m);
}