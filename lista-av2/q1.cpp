#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int ages[10];
    int weights[10];
    double heights[10];
    int sumAges = 0;
    double average;
    int peopleWeighingMorethan90AndHeightLessThan150 = 0;
    int peopleWhoMeasureMoreThan190 = 0;
    int peopleAgedBetween10And30YearsOld = 0;
    float porc = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Insira uma idade: ";
        cin >> ages[i];
        cout << "" << endl;
        sumAges += ages[i];
        cout << "Insira um peso: ";
        cin >> weights[i];
        cout << "" << endl;
        cout << "Insira uma altura: ";
        cin >> heights[i];
        cout << "" << endl;

        if (weights[i] > 90 && heights[i] < 1.50)
        {
            peopleWeighingMorethan90AndHeightLessThan150 += 1;
        }

        if (heights[i] > 1.90)
        {
            peopleWhoMeasureMoreThan190 += 1;
            if (ages[i] >= 10 && ages[i] <= 30)
            {
                peopleAgedBetween10And30YearsOld += 1;
            }
        }
    }
    average = sumAges / 10;
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
