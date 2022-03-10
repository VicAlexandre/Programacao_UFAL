#include <stdio.h>
#include <string.h>

int main()
{
    char primeiroNumero[100];
    char segundoNumero[100];
    char numeroFinal[200];
    int n, i=0, temp;
    scanf("%s", primeiroNumero);
    getchar();
    scanf("%s", segundoNumero);

    n = strlen(primeiroNumero)-1;

    for(n; n >= 0; n--)
    {
        temp = (primeiroNumero[n]-'0')+(segundoNumero[n]-'0'+i);
        if(temp>=10)
        {
            temp -= 10;
            i = 1;
            strcat(numeroFinal, temp+'0');
        }
        else
        {
            i = 0;
            strcat(numeroFinal, temp+'0');
        }
    }

    puts(numeroFinal);
    
}