#include <stdio.h>
#include <stdlib.h>

long fatorial(long n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fatorial(n - 1);
}



int main(){

    int n ;
    long fat = 5;
    
    printf("%d\n", fatorial(5));
    system("pause");
}