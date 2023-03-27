#include <stdio.h>
void main()
{
    float vProduto;
    int fPagamento;
    printf("Qual o valor do produto?\n");
    scanf("%f",&vProduto);
    printf("Qual a forma de pagamento? (1 - A vista | 2 - A prazo )\n");
    scanf("%d",&fPagamento);
    if (fPagamento == 1)
    {
        vProduto = vProduto * 0.95;
    } 
    else if (fPagamento == 2)
    {
        vProduto = vProduto * 1.1;
    };
    printf("Valor do produto ficou: %.2f\n", vProduto);
}