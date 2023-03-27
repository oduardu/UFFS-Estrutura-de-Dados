#include <stdio.h>
void main()
{
    int iVotador;
    printf("Qual a sua idade: \n");
    scanf("%d",&iVotador);
    if (iVotador >= 70 || iVotador >= 16 && iVotador < 18)
    {
        printf("Voto faculativo!\n");
    } else if (iVotador < 16)
    {
        printf("Não pode votar!\n");
         }
    else {
        printf("Voto obriatório!\n");
    }
    
}