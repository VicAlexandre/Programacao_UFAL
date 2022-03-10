#include <stdio.h>

int main()
{
    double cotacaoDolar, aliquotaICMS, valorProduto, valorFrete, impostoImportacao, impostoICMS, valorFinal, valorProdutoRS, valorFreteRS;
    scanf("%lf %lf %lf %lf", &cotacaoDolar, &aliquotaICMS, &valorProduto, &valorFrete);
    valorProdutoRS = valorProduto * cotacaoDolar;
    valorFreteRS = valorFrete * cotacaoDolar;
    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", cotacaoDolar, valorProdutoRS, valorFreteRS, valorProdutoRS + valorFreteRS);
    if (valorProduto + valorFrete >= 2500)
    {
        impostoImportacao = valorProdutoRS * 0.6;
        valorFinal = (valorProdutoRS + impostoImportacao) / (1 - (aliquotaICMS / 100));
        impostoICMS = valorFinal * (aliquotaICMS / 100);
        printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\nImpostos calculados sem o frete", impostoImportacao, impostoICMS, impostoICMS + impostoImportacao, impostoICMS + impostoImportacao + valorFreteRS + valorProdutoRS);
    }
    else
    {
        impostoImportacao = (valorProdutoRS + valorFreteRS) * 0.6;
        valorFinal = (valorProdutoRS + valorFreteRS + impostoImportacao) / (1 - (aliquotaICMS / 100));
        impostoICMS = valorFinal * (aliquotaICMS / 100);
        printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\nImpostos calculados com o frete", impostoImportacao, impostoICMS, impostoICMS + impostoImportacao, impostoICMS + impostoImportacao + valorFreteRS + valorProdutoRS);
    }
}