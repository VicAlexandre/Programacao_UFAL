#include <stdio.h>
#include <math.h>

double posicaoPar(int contador){
    return (pow(2, contador-1))/(3.0*(contador/2.0));
}

double posicaoImpar(int contador){
    return (contador)/(pow(2, contador-1));
}

void serie(int contador, int cap, double resultado){
    if(contador>cap){
        printf("S: %.2lf", resultado);
        return;
    }
    if(contador==1) resultado++;
    else if(contador%2==0) resultado+=posicaoPar(contador);
    else resultado+=posicaoImpar(contador);
    serie(contador+1, cap, resultado);
}

int main(){
    int cap;
    scanf("%d", &cap);
    serie(1, cap, 0.0);
}