#include <stdio.h>

int main(int argc, char const *argv[])
{
    int anoNascimento, anoAtual;

    printf("Insira seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Insira o ano atual: ");
    scanf("%d", &anoAtual);

    int idadeEmAnos = anoAtual - anoNascimento;

    printf("Sua idade em anos: %d\n", idadeEmAnos);
    printf("Sua idade em meses: %d\n", (idadeEmAnos * 12));
    printf("Sua idade em dias: %d\n", (idadeEmAnos * 365));

    return 0;
}
