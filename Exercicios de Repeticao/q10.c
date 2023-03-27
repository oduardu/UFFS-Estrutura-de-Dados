#include <stdio.h>

void main(){
    float nota, tNotas = 0, media;
    int matricula = 1;

    while (matricula != 0){

        printf("Informe a matricula do aluno ou 0 para finalizar: ");
        scanf("%d", &matricula);

        if (matricula == 0){
              break;
        }

        for (int i = 1; i <= 10; i++){

        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
        tNotas += nota;
        
    }
    media = tNotas / 10;
    printf("Matricula: ", matricula);
    printf("Média do aluno  %.2f\n", media);
}
    
}