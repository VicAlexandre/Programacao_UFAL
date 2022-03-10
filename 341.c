#include <stdio.h>

void recursao(int numJogos, int dificuldade, double precoJogo, int contador){
    if(contador==numJogos) return;
    scanf("%d %lf", &dificuldade, &precoJogo);
    switch (dificuldade)
    {
        case 0:
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.875;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.75;
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.875;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.75;
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.875;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.75;
            break;

        case 1:
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.9;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.8;
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.9;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.8;
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.9;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.8;
            break;
        case 2:
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.91;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.82;
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.91;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.82;
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.91;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.82;
            break;
        case 3:
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.925;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.85;
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.925;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.85;
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.925;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.85;
            break;
        case 4:
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.94;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.88;
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.94;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.88;
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.94;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.88;
            break;
        case 5:
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.95;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.9;
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.95;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.9;
            if(precoJogo<=100){
                if(precoJogo<=45) break;
                else precoJogo*=0.95;
                if(precoJogo<45) precoJogo=45;
            }
            else precoJogo*=0.9;
            break;
    }
    printf("Jogo[%d] = R$%.2f\n", contador, precoJogo);
    recursao(numJogos, dificuldade, precoJogo, contador+1);
}

int main(){
    int numJogos;
    scanf("%d", &numJogos);
    recursao(numJogos, 0, 0, 0);
}