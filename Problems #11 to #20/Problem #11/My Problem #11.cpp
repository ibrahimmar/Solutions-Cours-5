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
int MyReverseNumber(int Number)
{
    int Remainder = 0, Reverse = 0;
    
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        Reverse = Reverse * 10 + Remainder;
    }
    return Reverse;
}
void CheckReverseNumber(int Number, int Reverse)
{
    if (Number == Reverse)
        cout << "is a palindrome";
    else
        cout << "is not a palindrome";
}
int main()
{
     int Number = ReadNumber("Plrase enter to Namber?");
    int Reverse = MyReverseNumber(Number);
    CheckReverseNumber(Reverse, Number);
}
