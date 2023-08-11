#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin  >> Number;
    } while (Number < 0);
    return Number;
}

void PrintDigitFrequency(int Digit, int Number)
{
    int Remainder = 0;
    int fre = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        if (Remainder == Digit)
        {
            fre++;
        }
    }
    cout << fre << endl;
}

int main()
{
    int Number = ReadNumber("Please enter a number: ");
    int Digit = ReadNumber("Please enter a digit: ");
    PrintDigitFrequency(Digit, Number);

    return 0;
}
