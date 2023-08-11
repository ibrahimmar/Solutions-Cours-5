#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;    
}

int myreverse(int Number)
{
   int Reverse = 0;

    while (Number > 0)
    {
        Reverse = (Reverse * 10) + (Number % 10);
        Number = Number / 10;
    }
    return Reverse;
}

void PrintDigits(int Number)
{
       int Reverse = 0;

    while (Number > 0)
    {
        Reverse =  Number % 10;
        Number = Number / 10;

        cout << Reverse << endl;
    }
}

int main()
{
    PrintDigits(myreverse(ReadNumber("Enter Number? ")));
    return 0;
}