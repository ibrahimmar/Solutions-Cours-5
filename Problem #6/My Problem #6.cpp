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
    } while (Number < 0);
    return Number;
}

void PrintTotalDigits(int Number)
{
    int Sum = 0, Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Sum += Remainder; 
    }
    cout << "\n\n Sum Digits = "<< Sum << endl << endl;
}

int main()
{


    PrintTotalDigits(ReadPositiveNumber("Please enter a Positive Number? "));

    return 0;
}