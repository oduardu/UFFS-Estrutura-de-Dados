#include <stdio.h>

void main(){
    int num = 1;
    float porc, numInList = 0, total = 0;

    while (num > 0){
        printf("Digite um numero ou 0 para parar: ");
        scanf("%d", &num);

        if (num >= 10 && num <= 20){
            numInList += 1;
            total += 1;
        } else if (num > 0 && num <= 9){
            total += 1;
        } else if (num > 20){
            total += 1;
        } else if (num <= 0){
            porc = (numInList/total) * 100;
            printf("Porcentagem de numeros entre 10 e 20: %.2f \n", porc);
    }
}
}