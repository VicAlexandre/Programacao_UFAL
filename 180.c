#include <stdio.h>

void func(int contador, int capacidade, int ent, int sai, char exc){
    if(contador == 0){
        printf("%c", exc);
        return;
    }
    scanf("%d %d", &sai, &ent);
    capacidade = (capacidade + sai) - ent;
    if(0>capacidade) exc = 'S';
    func(contador-1, capacidade, ent, sai, exc);
}

int main(){
    int contador, capacidade;
    scanf("%d %d", &contador, &capacidade);
    func(contador, capacidade, 0, 0, 'N');
}