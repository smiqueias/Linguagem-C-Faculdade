
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float salario;
    int prestacaoEmprestimo;

    printf("Insira o valor do salario: ");
    scanf("%f", &salario);

    printf("Insira o valor da prestacao de um emprestimo: ");
    scanf("%d", &prestacaoEmprestimo);

    if (prestacaoEmprestimo > (salario * 0.2))
    {
        printf("Empréstimo não concedido");
    }
    else
    {
        printf("Empréstimo não concedido");
    }

    return 0;
}
