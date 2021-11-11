#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int age;
    int weight;
    double height;
    int sumAges = 0;
    double average;
    int peopleWeighingMorethan90AndHeightLessThan150 = 0;
    int peopleWhoMeasureMoreThan190 = 0;
    int peopleAgedBetween10And30YearsOld = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Insira uma idade: ";
        cin >> age;
        cout << "" << endl;
        sumAges += age;
        cout << "Insira um peso: ";
        cin >> weight;
        cout << "" << endl;
        cout << "Insira uma altura: ";
        cin >> height;
        cout << "" << endl;

        if (weight > 90 && height < 1.50)
        {
            peopleWeighingMorethan90AndHeightLessThan150 += 1;
        }

        if (height > 1.90)
        {
            peopleWhoMeasureMoreThan190 += 1;
            if (age >= 10 && age <= 30)
            {
                peopleAgedBetween10And30YearsOld += 1;
            }
        }
    }
    average = sumAges / 10;
    cout << sumAges << endl;
    cout << fixed << setprecision(4);
    cout << "Media das idades: " << average << endl;
    cout << "" << endl;
    cout << "Quantidade de pessoas com peso superior a 90kg e altura inferior a 1,50 m: "
         << peopleWeighingMorethan90AndHeightLessThan150 << " pessoa(s)" << endl;
    cout << "" << endl;
    cout << "Porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90m: "
         << "%" << (peopleAgedBetween10And30YearsOld * 100) / 10 << endl;

    return 0;
}
