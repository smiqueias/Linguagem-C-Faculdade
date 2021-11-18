#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int eixoX, eixoY;

    cout << "Digite a coodernada do eixo X: " << endl;
    cin >> eixoX;
    cout << "Digite a coodernada do eixo Y: " << endl;
    cin >> eixoY;

    if (eixoX >= 0 && eixoY >= 0)
    {
        cout << "As coordenadas (" << eixoX << "," << eixoY << ")"
             << " estao no primeiro quadrante." << endl;
    }

    else if (eixoX <= 0 && eixoY >= 0)
    {
        cout << "As coordenadas (" << eixoX << "," << eixoY << ")"
             << " estao no segundo quadrante." << endl;
    }

    else if (eixoX <= 0 && eixoY <= 0)
    {
        cout << "As coordenadas (" << eixoX << "," << eixoY << ")"
             << " estao no terceiro quadrante." << endl;
    }
    else
    {
        cout << "As coordenadas (" << eixoX << "," << eixoY << ")"
             << " estao no quarto quadrante." << endl;
    }

    return 0;
}
