
#include <stdio.h>
void main()
{
    int pNum, sNum, tNum, qNum, cMenor, cMaior;
    printf("Primeiro numero?\n");
    scanf("%d",&pNum);
    printf("Segundo numero?\n");
    scanf("%d",&sNum);
    printf("Terceiro numero?\n");
    scanf("%d",&tNum);
    printf("Quarto numero?\n");
    scanf("%d",&qNum);
    if (pNum < 0) 
    {
        cMenor++;
    } else {
        cMaior++;
    }
        if (sNum < 0) 
    {
        cMenor++;
    } else {
        cMaior++;
    }
        if (tNum < 0) 
    {
        cMenor++;
    } else {
        cMaior++;
    }
        if (qNum < 0) 
    {
        cMenor++;
    } else {
        cMaior++;
    }
    printf("Positivo: %d\n", cMaior);
    printf("Negativo: %d\n", cMenor);
}