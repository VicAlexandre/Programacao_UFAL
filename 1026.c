#include <stdio.h>

int main()
{
    int i, j, op;
    double valor;
    double banco[2][2] = {
                            {0,0},
                            {1,0}
                        };
    for(i=0; i<100; i++)
    {
        scanf("%d %lf", &op, &valor);
        if(op == -1)
            break;

        for(j=0; j<2; j++){
            if(op==banco[j][0])
                banco[j][1]+=valor;
        }
    }
    printf("Creditos: R$ %.2lf\nDebitos: R$ %.2lf\nSaldo: R$ %.2lf", banco[1][1], banco[0][1],banco[1][1]-banco[0][1]);
}