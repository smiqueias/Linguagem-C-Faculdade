#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number1, number2, number3;

    printf("Insira o numero 1: ");
    scanf("%d", &number1);

    printf("Insira o numero 2: ");
    scanf("%d", &number2);

    printf("Insira o numero 3: ");
    scanf("%d", &number3);

    printf("Soma: %d\n", (number1 + number2 + number3));
    printf("Pruduto: %d", (number1 * number2 * number3));

    return 0;
}
