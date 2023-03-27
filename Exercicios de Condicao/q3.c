#include <stdio.h>
void main()
{
    int hInicio, hFim, dHoras;
    printf("Qual a hora de inicio?\n");
    scanf("%d",&hInicio);
    printf("Qual a hora de fim?\n");
    scanf("%d",&hFim);
    if (hInicio >= hFim)
    {
        dHoras = (24 - hInicio) + hFim;
    }
    else
    {
        dHoras = hFim - hInicio;
    }

    printf("Duração em horas: %d\n",dHoras);
}