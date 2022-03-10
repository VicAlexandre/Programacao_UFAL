#include <stdio.h>
#include <string.h>

void inverterString(char string[], int tamanhoString)
{
    if(tamanhoString==0)
    {
        printf("%c", string[tamanhoString]);
        return;
    }
    printf("%c", string[tamanhoString]);
    inverterString(string, tamanhoString-1);
}

int main()
{
    char string[255];
    fgets(string, 255, stdin);
    inverterString(string, strlen(string));
}