#include <stdio.h>

void recursao(double produtoAntes, double produtoDepois, int contador, int produtosDescontados)
{
    if (contador > 5)
    {
        printf("%d", contador);
        return;
    }
    scanf("%lf %lf", &produtoAntes, &produtoDepois);
    if (produtoAntes * 0.8 >= produtoDepois)
        produtosDescontados++;
    recursao(produtoAntes, produtoDepois, contador+1, produtosDescontados);
}

int main()
{
    recursao(0, 0, 0, 0);
    return 0;
}