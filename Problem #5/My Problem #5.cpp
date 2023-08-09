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

void PrintRemander(int Number)
{
    int Remander = 0;

    while (Number > 0)
    {
        Remander = (Remander * 10) + (Number % 10);
        Number = Number / 10;
    }
    
    cout << "Remander = " << Remander << endl;
}