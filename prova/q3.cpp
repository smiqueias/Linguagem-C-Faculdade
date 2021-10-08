#include <iostream>
using namespace std;
int main()
{
    int quantidadeBombonPimenta, quantidadeBombonRosa, quantidadeBombonAoLeite;
    double precoBombomPimenta, precoBombomRosa, precoBombomAoLeite;
    cout << "==== Olá Vendedor ====" << endl;
    cout << "Informe o valor do preco do Bombom de Pimenta: " << endl;
    cin >> precoBombomPimenta;
    cout << "Informe o valor do preco do Bombom Rosa: " << endl;
    cin >> precoBombomRosa;
    cout << "Informe o valor do preco do Bombom Ao Leite: " << endl;
    cin >> precoBombomAoLeite;

    cout << "==== Bem-vindo a Bomboniere MeusBombons ====" << endl;
    cout << "Temos disponivéis 3 tipos de bombons: Pimenta, Rosa e Ao Leite. Faça sua escolha!" << endl;
    cout << "Informe a quantidade de bombons do tipo Pimenta que deseja: " << endl;
    cin >> quantidadeBombonPimenta;
    cout << "Informe a quantidade de bombons do tipo Rosa que deseja: " << endl;
    cin >> quantidadeBombonRosa;
    cout << "Informe a quantidade de bombons do tipo Ao Leite que deseja: " << endl;
    cin >> quantidadeBombonAoLeite;
    double valorCaixa = (quantidadeBombonPimenta * precoBombomPimenta) + (quantidadeBombonRosa * precoBombomRosa) + (quantidadeBombonAoLeite * precoBombomAoLeite);
    cout << "Total da caixa: " << valorCaixa;
}