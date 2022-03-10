#include <stdio.h>

int main()
{
    int n, i, j, numero;
    scanf("%d", &n);

    if(n==0)
    {
        printf("Vazia\n");
        return 0;
    }

    int matriz1[n][n];

    for(i=0; i < n; i++)
    {
        for(j=0; j < n; j++)
        {
            scanf("%d", &numero);
            matriz1[i][j]=numero;
        }
    }
    for(i=0; i < n; i++)
    {
        for(j=0; j < n; j++)
        {
            scanf("%d", &numero);
            matriz1[i][j]+=numero;
        }
    }
        
    for(i=0; i < n; i++)
    {
        for(j=0; j < n; j++)
        {
            printf("%d\n", matriz1[i][j]);
        }
    }
}