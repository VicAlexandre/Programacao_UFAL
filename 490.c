#include <stdio.h>

void precoFinal(double flatArvore, double xArvore, double yArvore){
    if(scanf("%lf", &xArvore)!=EOF){
        scanf("%lf", &yArvore);
        flatArvore+=xArvore*yArvore;
        precoFinal(flatArvore, xArvore, yArvore);
    }
    else printf("%.2lf\n%.2f", flatArvore, flatArvore/21);
    return;
}

int main(){
    double flatArvore;
    scanf("%lf", &flatArvore);
    precoFinal(flatArvore, 0, 0);
}