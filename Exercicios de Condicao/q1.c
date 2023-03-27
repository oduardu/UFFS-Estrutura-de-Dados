#include <stdio.h>
void main()
{
    int tHora;
    float vHora, salTotal;
    printf("Quantas horas você trabalhou?\n");
    scanf("%d",&tHora);
    printf("Quanto vale a sua hora de trabalho?\n");
    scanf("%f",&vHora);
    salTotal = (tHora * vHora);
    if(tHora >= 200) {
        salTotal = salTotal * 1.05;
    };
    printf("Salário: %.2f\n",salTotal);
}