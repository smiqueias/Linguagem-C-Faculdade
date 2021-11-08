#include <stdio.h>

int main(int argc, char **argv)
{
    int n;
    int soma = 0;
    int somaimpar = 1;
    int qtdimpar = 0;
    float media;

    do
    {
        printf("Informe um numero inteiro: (caso o numero informado for -1 a operacao sera encerrada) \n");
        scanf("%d", &n);
        if (n != -1)
        {
            if (n % 2 != 0)
            {
                qtdimpar += 1;
                somaimpar = somaimpar + n;
                media = somaimpar / qtdimpar;
            }
            else
            {
                soma = soma + n;
            }
        }

    } while (n != -1);
    printf("A soma dos numeros pares: %d \n", soma);
    printf("A media dos numeros impares: %.2f \n", media);
    printf("O produto desses numeros e: %.2f \n", media * soma);
    return 0;
}