#include <stdio.h>

void main(){
    int pNum, sNum, res = 0;
    char op;

    while (op != '@'){
        printf("Digite o primeiro numero: ");
        scanf("%d", &pNum);

        printf("Digite o segundo numero: ");
        scanf("%d", &sNum);

        printf("Digite a operacao desejada (+, -, *, /): ");
        scanf(" %c", &op);

        if (op == '+'){
            res = pNum + sNum;
        } else if(op == '-'){
            res = pNum - sNum;
        } else if (op == '*'){
            res = pNum * sNum;
        } else if(op == '/'){
            res = pNum / sNum;
        } else if (op == '@'){
            break;
        }

        printf("Resultado = %d \n", res);
        printf("Para sair digite @!\n");
        scanf(" %c", &op);
    }
}