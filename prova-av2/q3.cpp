#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float numeroInteiro, maior = 0.0, menor = 1000000000.0, somaNumerosInteiros = 0.0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite um numero inteiro. Ex: 2.5 " << endl;
        cin >> numeroInteiro;
        somaNumerosInteiros += numeroInteiro;

        if (numeroInteiro > maior)
        {
            maior = numeroInteiro;
        }

        if (numeroInteiro < menor)
        {
            menor = numeroInteiro;
        }
    }
    cout << fixed << setprecision(2);
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    cout << "Media: " << somaNumerosInteiros / 10.0 << endl;
    return 0;
}
