#include <stdio.h>

int main()
{
    int i, j, numero, media=0, contadorMedia=0, menor, delta;
    int matriz[3][3];
    for(i=0; i < 3; i++){
        for(j=0; j < 3; j++){
            scanf("%d", &numero);
            if(i==0&&j==0)
                menor=numero;
            if(numero < menor)
                menor=numero;
            matriz[i][j]=numero;
            if(numero>0){
                media+=numero;
                ++contadorMedia;
            }
        }    
    }
    if(menor%2==0)
        delta=1;
    else
        delta=0;
    printf("%.2lf %d %d %d", (media*1.0)/contadorMedia, menor, delta, matriz[0][1] + matriz[0][2] + matriz[1][0] + matriz[1][2] + matriz[2][0] + matriz[2][1]);
}
