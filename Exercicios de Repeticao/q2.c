#include <stdio.h>

void main(){
    int pNum, sNum, resultado = 0;

    printf("Digite o primeiro número da multiplicação: ");
    scanf("%d", &pNum);

    printf("Digite o segundo número da multiplicação: ");
    scanf("%d", &sNum);


    for (int i = 1; i <= pNum; i++){
        resultado += sNum;
    }

    printf("O resultado é %d \n", resultado);

}