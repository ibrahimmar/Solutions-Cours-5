#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string Message)
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
  
    for (int i = 1; i < Number; i++)
    {
        if (isPerfectNumber(i))
       
        cout << i <<  "\n";
    }
    
    

}

int main()
{
    PrintResult(ReadNumber("Please Enter a Positive Number?"));
}