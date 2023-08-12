#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int SumOfDigits(int Number)
{
    int Sum = 0, Remiander = 0;

    while (Number > 0)
    {
        Remiander = Number % 10;
        Number = Number / 10;
        Sum = Sum + Remiander;
    }
    return Sum;
}

int main()
{
     cout << "\nSum Of Digits = " << SumOfDigits(ReadPositiveNumber("Please enter a positive number?"))         << "\n";

    return 0;
}