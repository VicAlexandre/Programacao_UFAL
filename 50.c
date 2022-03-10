#include <stdio.h>

void organizarTamanhos(double tamanhos[]){
    double temp;
    if (tamanhos[2]>tamanhos[3]){
        temp = tamanhos[2];
        tamanhos[2] = tamanhos[3];
        tamanhos[3] = temp;
    }
    if (tamanhos[1]>tamanhos[3]){
        temp = tamanhos[1];
        tamanhos[1] = tamanhos[3];
        tamanhos[3] = temp;
    }
    if (tamanhos[0]>tamanhos[3]){
        temp = tamanhos[0];
        tamanhos[0] = tamanhos[3];
        tamanhos[3] = temp;
    }
    if (tamanhos[1]>tamanhos[2]){
        temp = tamanhos[1];
        tamanhos[1] = tamanhos[2];
        tamanhos[2] = temp;
    }
    if (tamanhos[0]>tamanhos[2]){
        temp = tamanhos[0];
        tamanhos[0] = tamanhos[2];
        tamanhos[2] = temp;
    }
    if (tamanhos[0]>tamanhos[1]){
        temp = tamanhos[0];
        tamanhos[0] = tamanhos[1];
        tamanhos[1] = temp;
    }
    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", tamanhos[0], tamanhos[2], tamanhos[3], tamanhos[1]);
    return;
}

void scanRecursivo(double tamanhos[], int contador){
    if(contador==4){
        organizarTamanhos(tamanhos);
        return;
    }
    scanf("%lf", &tamanhos[contador]);
    scanRecursivo(tamanhos, contador+1);
}

int main(){
    double tamanhos[4];
    scanRecursivo(tamanhos, 0);
}