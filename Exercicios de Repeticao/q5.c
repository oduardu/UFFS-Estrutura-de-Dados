#include <stdio.h>

void main(){
    int num, fat = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        if (num == 0){
            fat = 1;
        } else{
            fat *= i;
        } 
        
    }

    printf("Fatorial de %d é igual %d \n", num, fat);
}