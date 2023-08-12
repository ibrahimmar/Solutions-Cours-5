#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string Message)
{

    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
bool isPerfectNumber(int Number)
{
    int Sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if(Number % i == 0)
        Sum += i;
    }
    return Number == Sum;
}

void PrintResult(int Number)
{
    if (isPerfectNumber(Number))
        cout << Number << " is a Perfect Number \n";
    else
        cout << Number << " is Not a Perfect Number \n";
}

int main()
{
    PrintResult(ReadPositiveNumber("Please Enter a Positive Number?"));
}