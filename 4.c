#include <stdio.h>

int elementoRepetido(int array[], int elemento, int contador, int flagArray)
{
    if(contador==-1)
    {
        return 0;
    }
    if(array[contador]==elemento)
    {
        return 1;
    }
    return elementoRepetido(array, elemento, contador-1, flagArray);
}

void recursao(int figurinhas[], int qntFigurinhas, int contadorJoao, int contadorMaria, int pontosJoao, int pontosMaria, int tamanhoArray, int figurinhasRepetidas[])
{
    if(qntFigurinhas==-1)
    {
        printf("%d\n", contadorJoao);   printf("%d\n", contadorMaria);
        if(pontosJoao>pontosMaria)
            printf("%d", pontosJoao);
        else
            printf("%d", pontosMaria);
        return;
    }
    
    if(figurinhas[qntFigurinhas]%2==0)
    {
        ++contadorJoao;
        if(elementoRepetido(figurinhas, figurinhas[qntFigurinhas], tamanhoArray-1, 0)==0)
            pontosJoao += figurinhas[qntFigurinhas];
    }

    else
    {
        ++contadorMaria;
        if(elementoRepetido(figurinhasRepetidas, figurinhas[qntFigurinhas], tamanhoArray-1, 0)==0)
            pontosMaria += figurinhas[qntFigurinhas];
    }

    figurinhasRepetidas[qntFigurinhas] = figurinhas[qntFigurinhas];
    recursao(figurinhas, qntFigurinhas-1, contadorJoao, contadorMaria, pontosJoao, pontosMaria, tamanhoArray, figurinhasRepetidas);
}

void receberFigurinhas(int figurinhas[], int qntFigurinhas, int contador)
{
    if(contador==qntFigurinhas)
        return;
    scanf("%d", &figurinhas[contador]);
    receberFigurinhas(figurinhas, qntFigurinhas, contador+1);
}

int main()
{
    int qntFigurinhas;
    scanf("%d", &qntFigurinhas);
    int figurinhas[qntFigurinhas], figurinhasRepetidas[qntFigurinhas];
    size_t n = sizeof(figurinhas)/sizeof(figurinhas[0]);
    receberFigurinhas(figurinhas, qntFigurinhas, 0);
    recursao(figurinhas, qntFigurinhas-1, 0, 0, 0, 0, n, figurinhasRepetidas);
}