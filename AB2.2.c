    #include <stdio.h>

    void printarTabuleiro(char tabuleiro[3][3])
    {
        int i, j;
        for(i=0; i < 3; i++)
        {
            for(j=0; j < 3; j++)
                printf("%c", tabuleiro[i][j]);
            printf("\n");
        }
    }

    char checarVencedor(char tabuleiro[3][3])
    {
        int i;

        for(i=0; i<3; i++)
            if(tabuleiro[i][0]==tabuleiro[i][1] && tabuleiro[i][0]==tabuleiro[i][2]) 
                return tabuleiro[i][0];
        for(i=0; i<3; i++)      
            if(tabuleiro[0][i]==tabuleiro[1][i] && tabuleiro[0][i]==tabuleiro[2][i]) 
                return tabuleiro[0][i];

    
        if(tabuleiro[0][0]==tabuleiro[1][1] && tabuleiro[1][1]==tabuleiro[2][2])
        return tabuleiro[0][0];

    if(tabuleiro[0][2]==tabuleiro[1][1] && tabuleiro[1][1]==tabuleiro[2][0])
        return tabuleiro[0][2];

    return '-';
    }

    void limparTabuleiro(char tabuleiro[3][3], int i, int j)
    {
        for(i=0; i < 3; i++)
        {
            for(j=0; j < 3; j++)
            {
                tabuleiro[i][j]='-';
            }
        }
        return;
    }

    int main()
    {
        int jogarNovamente=1, x, y, i, j, contadorGab=0, contadorPai=0;
        char tabuleiro[3][3];
        char vez;

        while(jogarNovamente==1)
        {
            vez = 'G';
            limparTabuleiro(tabuleiro, 0, 0);
            for(i=0; i < 3; i++){
                for(j=0; j < 3; j++)
                {
                    scanf("%d %d", &x, &y);
                    --x; --y;
                    if(vez=='G')
                    {
                        tabuleiro[x][y]='X';
                        if(checarVencedor(tabuleiro)=='X')
                        {
                            contadorGab++;
                            printf("gabrielly  venceu essa partida\n");
                            printarTabuleiro(tabuleiro);
                            i=10; j=10;
                            
                        }
                        vez='P';
                    }
                    else if(vez=='P')
                    {
                        tabuleiro[x][y]='O';
                        if(checarVencedor(tabuleiro)=='O')
                        {
                            contadorPai++;
                            printf("pai venceu essa partida\n");
                            printarTabuleiro(tabuleiro);
                            i=10; j=10;
                           
                        }
                        vez='G';
                    }
                }
            }
            if(i==3&&j==3)
            {
                printf("empate\n");
                printarTabuleiro(tabuleiro);
            }
            printf("\n");
            scanf("%d", &jogarNovamente);
        }

        if(contadorGab > contadorPai)
            printf("gabrielly foi a grande vencedora desse grande duelo\n");
        else if (contadorPai > contadorGab)
            printf("pai foi a grande vencedora desse grande duelo\n");
        else if (contadorGab==contadorPai)
            printf("esse grande duelo terminou em empate\n");
        
    }