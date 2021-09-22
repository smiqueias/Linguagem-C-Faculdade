#include <stdio.h>

int main(int argc, char const *argv[])
{
    float salarioAtual;

    printf("Insira seu salario: ");
    scanf("%f", &salarioAtual);

    if (salarioAtual <= 3000)
    {
        printf("Valor de aumento: 15%%\n");
        printf("Novo salario: %f\n", salarioAtual * (1 + 0.15));
    }
    else if (salarioAtual >= 3000 && salarioAtual <= 6000)
    {
        printf("Valor de aumento: 10%%\n");
        printf("Novo salario: %f\n", salarioAtual * (1 + 0.10));
    }
    else if (salarioAtual >= 6000 && salarioAtual <= 9000)
    {
        printf("Valor de aumento: 5%%\n");
        printf("Novo salario: %f\n", salarioAtual * (1 + 0.05));
    }
    else
    {
        printf("Valor de aumento: 0%%\n");
        printf("Sem mudança no salario\n");
    }
    return 0;
}
