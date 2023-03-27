#include <stdio.h>
void main()
{
    int pJogador;
    printf("Diga qual a posição o jogador:\n");
    scanf("%d",&pJogador);
    if(pJogador <= 5 && pJogador > 0){
        printf("Top 5!\N");
    } 
    else if( pJogador > 5 && pJogador <= 10 )
    {
        printf("Top 10!\n");
    } else if (pJogador > 10 && pJogador <=20)
    {
        printf("Top 20!\n");
    } else if (pJogador > 20 && pJogador <=30)
    {
        printf("Top 30!\n");
    } else if (pJogador > 30)
    {
        printf("Top 100!\n");
    }
}