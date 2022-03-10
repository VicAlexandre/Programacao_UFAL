#include <stdio.h>

int serie(int i, int tamanhoSerie){
    if(i==1){
        return tamanhoSerie;
    }
    if(i%2==0) i/=2;
    else i=(3*i)+1;
    return serie(i, tamanhoSerie+1);
}

int maxSerie(int i, int j, int max, int atual){
    if(i>=j){
        return max;
    }
    atual = serie(i, 1);
    if(atual>max) max = atual;
    return maxSerie(i+1, j, max, atual);
}

void chamadaRecursiva(int i, int j){
    if(scanf("%d",&i)==EOF) return;
    scanf("%d", &j);
    if(i>j) printf("%d %d %d\n", i, j, maxSerie(j, i, 0, 0));
    else if(i==j) printf("%d %d %d\n", i, j, serie(i, 1));
    else printf("%d %d %d\n", i, j, maxSerie(i, j, 0, 0));
    chamadaRecursiva(i, j);
}

int main(){
    chamadaRecursiva(0,0);
    return 0;
}