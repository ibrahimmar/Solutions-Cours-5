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
void ReverseNumber(int Number)
{
    int Reverse = 0;

    while (Number > 0)
    {
        Reverse = (Reverse * 10) + (Number % 10);
        Number = Number / 10;

    }
    cout << Reverse << endl;
}

int main()
{
    ReverseNumber(ReadPositiveNumber("enter Number"));
}