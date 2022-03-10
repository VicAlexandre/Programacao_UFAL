#include <stdio.h>

int main()
{
    int i, j, numero, media=0, maior=0, delta;
    int matriz[3][3];
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            scanf("%d", &numero);
            if(numero > maior)
                maior=numero;
            matriz[i][j]=numero;
            if(numero>0)
                media+=numero; 
        }    
    }
    if(maior>0)
        delta=1;
    else if(maior<0)
        delta=-1;
    else
        delta=0;
    printf("%.2lf %d %d %d", (media*1.0)/9, maior, delta, matriz[0][0]+matriz[1][1]+matriz[2][2]);
}
