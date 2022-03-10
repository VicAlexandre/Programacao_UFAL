#include <stdio.h>

void contar(int array[], int contador, int quant, int checkNumero){
    if(contador==10){
        printf("%d", quant);
        return;
    }
    if(array[contador]==checkNumero) ++quant;
    contar(array, contador+1, quant, checkNumero);
}

void scanRecursao(int array[], int contador, int checkNumero){
    if(contador==10){
        scanf("%d", &checkNumero);
        contar(array, 0, 0, checkNumero);
        return;
    }
    scanf("%d", &array[contador]);
    scanRecursao(array, contador+1, checkNumero);
}

int main(){
    int array[10];
    scanRecursao(array, 0, 0);
}