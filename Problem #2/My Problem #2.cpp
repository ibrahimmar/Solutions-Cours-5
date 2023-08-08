#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2};

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
enPrimNotPrime CheckPrime(int Number)
{

    int M = round(Number / 2);

    for (int Counter =2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
        return enPrimNotPrime::NotPrime;
    }

    return enPrimNotPrime::Prime;
}

void PrintNumberType(int Number)
{
    cout << " Prime Numbers are" << endl;
    for (int i = 1; i <= Number; i++)
    {
       if (CheckPrime(i) == enPrimNotPrime::Prime)
       {
			cout << " the result is : " << i << "\n";
       }
       
    }

}
int main()
{
 int Number = ReadPositiveNumber("please enter a positive number");
 PrintNumberType( Number);
}