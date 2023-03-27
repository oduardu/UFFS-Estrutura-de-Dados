#include <stdio.h>

void main(){
    float sal = 1, totalSal, medSal, medFilhos, filhos, totalFilhos, count;

    while (sal > 0){
        printf("Digite o seu salario\n");
        scanf("%f", &sal);

        printf("Digite quantos filhos voce tem\n");
        scanf("%f", &filhos);

        if (sal > 0){
            totalSal += sal;
            totalFilhos += filhos;
            count += 1;
        } else if (sal < 0){
            medSal = totalSal/count;
            medFilhos = totalFilhos/count;
            printf("A média de salários é de %.2f \n A média de filhos e de %.2f\n", medSal, medFilhos);
        }
    }
}