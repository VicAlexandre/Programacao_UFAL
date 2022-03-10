#include <stdio.h>

int menorNum(int array[], int contador, int menor){
    if(contador==6)     return menor;
    if(contador==0)     menor=array[contador];
    else if(array[contador]<menor)      menor=array[contador];
    return menorNum(array, contador+1, menor);
}

int maiorNum(int array[], int contador, int maior){
    if(contador==6)     return maior;
    if(array[contador]>maior)   maior=array[contador];
    return maiorNum(array, contador+1, maior);
}

int main(){
    int array[6];
    scanf("%d %d %d %d %d %d", &array[0], &array[1],&array[2], &array[3],&array[4], &array[5]);
    printf("%d\n%d", menorNum(array,0,0), maiorNum(array,0,0));
    return 0;
}