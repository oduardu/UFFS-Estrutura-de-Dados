#include <stdio.h>

void main(){

    int num;

    printf("Digite um número para achar a metade: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if (i == (num/2) + 1){
            printf("Metade\n");
        }
        printf("%d \n", i);
    }
}