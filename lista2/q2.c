#include <stdio.h>
int main(int argc, char const *argv[])
{
    float altura;
    char sexo;

    printf("H - Homem\n");
    printf("M - Mulher\n");
    printf("Informe o seu sexo: ");
    scanf("%c", &sexo);

    printf("Insira sua altura: ");
    scanf("%f", &altura);

    if (sexo == 'H')
    {
        printf("Homem ");
        printf("Seu peso ideal: %f\n", (72.7 * altura) - 58);
    }
    else
    {
        printf("Mulher");
        printf("Seu peso ideal: %f\n", (62.1 * altura) - 44.7);
    }
    return 0;
}
