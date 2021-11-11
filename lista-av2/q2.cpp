#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number;
    int totalNumbers = 0;
    int totalEvenNumbers = 0;
    int sumEvenNumbers = 0;
    int sumOddNumbers = 0;
    float oddNumberAverage;
    while (number != -1)
    {
        cout << "Enter a number (-1 to quit): ";
        cin >> number;
        cout << "" << endl;
        if (number != -1)
        {
            totalNumbers += 1;
            if (number % 2 == 0)
            {
                sumEvenNumbers += number;
            }
            else
            {
                sumOddNumbers += number;
                totalEvenNumbers += 1;
            }
        }
    }
    oddNumberAverage = sumOddNumbers / totalEvenNumbers;
    cout << fixed << setprecision(2);
    cout << "Soma dos numeros pares: " << sumEvenNumbers << endl;
    cout << "" << endl;
    cout << setprecision(3) << "Media dos numeros impares: " << oddNumberAverage << endl;
    cout << "Produto final: " << sumEvenNumbers * oddNumberAverage << endl;

    return 0;
}
