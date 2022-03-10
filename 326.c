#include <stdio.h>

int main(){
    int x, y , i, contador = 1;
    scanf("%d %d", &x, &y);

    for(i = 1; i <= y; i++)
    {
        if(contador == y)
        {
            printf("%d ");
        }
        else if(contador == x)
        {
            printf("%d\n", i);
            contador = 1;
        }
        else
            printf("%d ", i);
        contador++;
    }
}