#include <stdio.h>

void main(){
    int num, resultado = 0;

    printf("Digite um número para encontrar a soma dos números até ele: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        resultado += i;
    }
    printf("Resultado é %d \n", resultado);
}