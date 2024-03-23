#include <stdio.h>

void pipe(int n, char b);
void sqr(int n, char b);
void mario(int n, char b);

int main(void)
{
    int n;
    printf("enter: ");
    scanf("%d", &n);
    mario(n, '#');

    return 0;
}

void mario(int n, char b)
{
    pipe(n,b);
    sqr(n,b);
}

void sqr(int n, char b)
{
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < n;j++)
            printf("\033[0;92m%c",b);
        printf("\n");
    }
}

void pipe(int n,char b)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("\033[1;91m%c", b);
        } printf("\n");
    }
}