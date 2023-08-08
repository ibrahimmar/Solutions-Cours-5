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
void PerfectNumber(int Number)
{

    int sum = 0;
    for (int i = 1; i < Number; i++)
    { 
      
        if (Number % i == 0)  
         sum = sum +i;
    }
    if (sum == Number){
        cout << Number << " is a Perfect Number";
    }  
    else
        cout << Number << " is Not a Perfect Number";
       
}
int main()
{
    PerfectNumber(ReadPositiveNumber("Please enter to Namber"));
}