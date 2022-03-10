#include <stdio.h>

int recurs(int entrada, int contador, float multa){
    scanf("%d", &entrada);
    if(entrada==999){
        printf("%.2f", multa);
        printf("\n%d", contador);
        return;
    }

    if(entrada>2){
        multa = multa +(12.89 * (entrada - 2.0));
        contador++;
    }
    recurs(entrada, contador, multa);
}

int main(){
    int entrada, contador = 0;
    float multa = 0.0;
    recurs(entrada, contador, multa);
}