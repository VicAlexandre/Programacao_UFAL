#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char classe[15];
    int vida;
    int dano;
    int experienciaDerrotado;
}Monstro;

typedef struct
{
    char classe[15];
    int dano;
    int vida;
    int experienciaAcumulada;
}Jogador;

int main()
{
    int numeroMonstros, a, b, i, j, k, l, n, r, jogadaTulio, jogadaPedro, monstroAtual, combateValido, fimCombate, flagBonus=0, posicaoInicialPX, posicaoInicialPY, posicaoInicialTX, posicaoInicialTY,
    vidaMaxMonstroAtual, monstrosDerrotadosPedro=0, monstrosDerrotadosTulio=0, condicaodeQuebrar=1, loopMaximo=0;
    scanf("%d", &numeroMonstros);
    Monstro monstros[numeroMonstros];
    Jogador tulio; Jogador pedro;

    for(i=0; i < numeroMonstros; i++)
    {
        scanf("%d", &monstros[i].id); getchar(); scanf("%s", &monstros[i].classe); scanf("%d", &monstros[i].vida); 
        scanf("%d", &monstros[i].dano); scanf("%d", &monstros[i].experienciaDerrotado);
    }

    getchar();
    scanf("%s", &pedro.classe); scanf("%d", &pedro.dano); scanf("%d", &pedro.vida); 
    scanf("%d", &i); scanf("%d", &j);
    pedro.experienciaAcumulada = 0;
    int vidaMaximaPedro = pedro.vida;
    posicaoInicialPX = i; posicaoInicialPY = j;

    getchar();
    scanf("%s", &tulio.classe); scanf("%d", &tulio.dano); scanf("%d", &tulio.vida);
    scanf("%d", &k); scanf("%d", &l);
    tulio.experienciaAcumulada = 0;
    int vidaMaximaTulio = tulio.vida;
    posicaoInicialTX = k; posicaoInicialTY = l;

    scanf("%d", &n);    
    int floresta[n][n];

    for(a=0; a < n; a++)
    {   
        for(b=0; b < n; b++)
        {
            scanf("%d", &floresta[a][b]);
        }
    }
    
    scanf("%d", &r);
    
    for(loopMaximo=0; loopMaximo < r; loopMaximo++)
    {
        combateValido=1;
        scanf("%d %d", &jogadaPedro, &jogadaTulio);
        if(jogadaPedro==1)
        {
            --i;
            if(i<0)
            {
                ++i;
                combateValido=0;
            }
        }        
        else if(jogadaPedro==2)
        {
            ++i;
            if(i>n-1)
            {
                --i;
                combateValido=0;
            }
        }
        else if(jogadaPedro==3)
        {
            --j;
            if(j<0)
            {
                ++i;
                combateValido=0;
            }
        }

        else if(jogadaPedro==4)
        {
            ++j;
            if(j>n-1)
            {
                --j;
                combateValido=0;
            }
        } 
        
        if(floresta[i][j]!=-1 && combateValido==1)
        {
            for(b=0; b < numeroMonstros; b++)
            {
                if(floresta[i][j]==monstros[b].id)
                {
                    monstroAtual = b;
                    vidaMaxMonstroAtual = monstros[monstroAtual].vida;
                    break;
                }
            }
                
                if(strcmp(pedro.classe, "arqueiro") == 0 && strcmp(monstros[monstroAtual].classe, "mago") == 0)
                {
                    pedro.dano*=2;
                    flagBonus=1;
                }
                if(strcmp(pedro.classe, "assassino") == 0 && strcmp(monstros[monstroAtual].classe, "arqueiro") == 0)
                {
                    pedro.dano*=2;
                    flagBonus=1;
                }
                if(strcmp(pedro.classe, "mago") == 0 && strcmp(monstros[monstroAtual].classe, "assassino") == 0)
                {
                    pedro.dano*=2;
                    flagBonus=1;
                }
                while(1)
                {
                    monstros[monstroAtual].vida -= pedro.dano;
                    if(monstros[monstroAtual].vida<=0)
                    {
                        pedro.experienciaAcumulada+=monstros[monstroAtual].experienciaDerrotado;
                        floresta[i][j] = -1;
                        ++monstrosDerrotadosPedro;
                        monstros[monstroAtual].vida = vidaMaxMonstroAtual;
                        break;
                    }
                    pedro.vida -= monstros[monstroAtual].dano;
                    if(pedro.vida <= 0)
                    {
                        pedro.experienciaAcumulada-= pedro.experienciaAcumulada/2;
                        pedro.vida = vidaMaximaPedro;
                        i=posicaoInicialPX; j=posicaoInicialPY;
                        monstros[monstroAtual].vida = vidaMaxMonstroAtual;
                        break;
                    }
                }

        }
        if(flagBonus==1)
        {
            pedro.dano/=2;
            flagBonus=0;
        }
        combateValido=1;

        if(jogadaTulio==1)
        {
            --k;
            if(k<0)
            {
                ++k;
                combateValido=0;
            }
        }    

        else if(jogadaTulio==2)
        {
            ++k;
            if(k>n-1)
            {
                --k;
                combateValido=0;
            }
        }

        else if(jogadaTulio==3)
        {
            --l;
            if(l<0)
            {
                ++l;
                combateValido=0;
            }
        }

        else if(jogadaTulio==4)
        {
            ++l;
            if(l>n-1)
            {
                --l;
                combateValido=0;
            }
        } 

        if(floresta[k][l]!=-1 && combateValido==1)
        {
            for(b=0; b < numeroMonstros; b++)
            {
                if(floresta[k][l]==monstros[b].id)
                {
                    monstroAtual = b;
                    vidaMaxMonstroAtual = monstros[monstroAtual].vida;
                    break;
                }
            }
            
                if(strcmp(tulio.classe, "arqueiro") == 0 && strcmp(monstros[monstroAtual].classe, "mago") == 0)
                {
                    tulio.dano*=2;
                    flagBonus=1;
                }
                if(strcmp(tulio.classe, "assassino") == 0 && strcmp(monstros[monstroAtual].classe, "arqueiro") == 0)
                {
                    tulio.dano*=2;
                    flagBonus=1;
                }
                if(strcmp(tulio.classe, "mago") == 0 && strcmp(monstros[monstroAtual].classe, "assassino") == 0)
                {
                    tulio.dano*=2;
                    flagBonus=1;
                }
            while(1)
            {
                    monstros[monstroAtual].vida -= tulio.dano;
                    if(monstros[monstroAtual].vida<=0)
                    {
                        tulio.experienciaAcumulada+=monstros[monstroAtual].experienciaDerrotado;
                        floresta[k][l] = -1;
                        ++monstrosDerrotadosTulio;
                        monstros[monstroAtual].vida = vidaMaxMonstroAtual;
                        break;
                    }
                    tulio.vida -= monstros[monstroAtual].dano;
                    if(tulio.vida <= 0)
                    {
                        tulio.experienciaAcumulada-= tulio.experienciaAcumulada/2;
                        tulio.vida = vidaMaximaTulio;
                        k=posicaoInicialTX; l=posicaoInicialTY;
                        monstros[monstroAtual].vida = vidaMaxMonstroAtual;
                        break;
                    }
            }
            if(flagBonus==1)
            {
                tulio.dano/=2;
                flagBonus=0;
            }

        }
        combateValido=1;
    }
    printf("%d - %d - %d - %d\n", pedro.vida, vidaMaximaPedro, pedro.experienciaAcumulada, monstrosDerrotadosPedro);
    printf("%d - %d - %d - %d\n", tulio.vida, vidaMaximaTulio, tulio.experienciaAcumulada, monstrosDerrotadosTulio);
    return 0;
}