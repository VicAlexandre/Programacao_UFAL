#include <stdio.h>

int repeticaoDois(int array[], int a, int contador, int contador2, int comparado){
    if(contador==a)
        return contador2;
    if(array[contador]==comparado)
        ++contador2;
    return repeticaoDois(array, a, contador+1, contador2, comparado);
}

int repeticaoUm(int array[], int a, int max, int contador, int ind, int maxQuant, int odeioMinhaVida){
    if(contador==a)
        return ind;
    
    odeioMinhaVida=repeticaoDois(array,a,0,0,array[contador]);
    
    if(odeioMinhaVida>=maxQuant){
        if(array[contador]>max){
            ind=contador;
            max=array[contador];
            maxQuant=odeioMinhaVida;
        }
    }
    
    return repeticaoUm(array, a, max, contador+1, ind, maxQuant, odeioMinhaVida);
}

void povoarArray(int array[], int tamanho){
    if (tamanho == 0)  return;
    scanf("%d", &array[0]);
    povoarArray(&array[1], tamanho - 1);
    return;
}

void scanRecursao(int rodadas, int aP, int aT, int pontosP, int pontosT, int tempP, int tempT){
    if(rodadas==0){
        if(pontosP>pontosT) printf("Pedro foi vitorioso com %d pontos", pontosP);
        else if(pontosT>pontosP) printf("Túlio foi vitorioso com %d pontos", pontosT);
        else printf("Túlio e Pedro empataram com %d pontos", pontosP);
        return;
    }
    scanf("%d %d", &aP, &aT);
    int arrayP[aP], arrayT[aT];
    povoarArray(arrayP, aP);
    povoarArray(arrayT, aT);
    tempP=repeticaoUm(arrayP, aP, 0,0,0,0,0);
    tempT=repeticaoUm(arrayT, aT, 0,0,0,0,0);
    printf("pedro: %d tulio: %d\n", arrayP[tempP], arrayT[tempT]);
    if(arrayP[tempP]>arrayT[tempT]) ++pontosP;
    else if(arrayP[tempP]<arrayT[tempT]) ++pontosT;
    scanRecursao(rodadas-1, aP, aT, pontosP, pontosT, tempP, tempT);
    
}

int main(){
    int rodadas;
    scanf("%d\n", &rodadas);
    scanRecursao(rodadas,0,0,0,0,0,0);
}