#include <stdio.h>

void batalhas(int inimigos[], int energiaMarquinhos, int oponenteAtual, int n, int contador, int inimigosDerrotados){
    if(contador==n){
        printf("Nível de energia: %d\n", energiaMarquinhos);
        printf("%.2f%\n", ((inimigosDerrotados*1.0)/contador*1.0)*100.0);
        if(energiaMarquinhos>20000) printf("Marquinhos é o novo Mestre da Vila da Árvore!");
        else printf("Continue tentando!");
        return;
    }
    scanf("%d", &oponenteAtual);
    if(energiaMarquinhos>=inimigos[oponenteAtual-1]){
        energiaMarquinhos+=energiaMarquinhos-inimigos[oponenteAtual-1];
        ++inimigosDerrotados;
    }
    batalhas(inimigos, energiaMarquinhos, oponenteAtual, n, contador+1, inimigosDerrotados);
}

void scanRecursao(int inimigos[], int n, int contador, int energiaMarquinhos){
    if(contador==n){
        batalhas(inimigos, energiaMarquinhos, 0, n, 0, 0);
        return;
    }
    scanf("%d", &inimigos[contador]);
    scanRecursao(inimigos, n, contador+1, energiaMarquinhos);
}

int main(){
    int energiaMarquinhos, n;
    scanf("%d %d", &energiaMarquinhos, &n);
    int inimigos[n];
    scanRecursao(inimigos, n, 0, energiaMarquinhos);
}