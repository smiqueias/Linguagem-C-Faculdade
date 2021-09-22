#include <stdio.h>

int main(int argc, char const *argv[])
{
    float precoFabricaVeiculo, percentualLucro, percentualImpostos;

    printf("Insira o preco de fabrica do veiculo: ");
    scanf("%f", &precoFabricaVeiculo);

    printf("Insira o percentual de lucro: ");
    scanf("%f", &percentualLucro);

    printf("Insira o percentual de impostos: ");
    scanf("%f", &percentualImpostos);

    float valorLucroDistribuidor = precoFabricaVeiculo * (percentualLucro / 100);
    float valorImpostos = precoFabricaVeiculo * (percentualImpostos / 100);

    printf("Valor do lucro do distribuidor: %f\n ", valorLucroDistribuidor);
    printf("Imposto: %f\n", valorImpostos);
    printf("Preco final: %f\n", (precoFabricaVeiculo + valorLucroDistribuidor + valorImpostos));

    return 0;
}
