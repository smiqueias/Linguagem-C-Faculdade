#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double temperaturaFahrenheit;
    double temperaturaCelsius;

    cout << "Insira a temperatura em Fahrenheit" << endl;
    cin >> temperaturaFahrenheit;
    temperaturaCelsius = (temperaturaFahrenheit - 32.0) * 5.0 / 9.0;
    cout << temperaturaFahrenheit << " Fahrenheit em Celsius: " << temperaturaCelsius;

    return 0;
}
