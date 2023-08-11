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
 
 int myfrecount(int Number, short Digit)
 {
    int Remainder = 0;
    int fer = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        if (Remainder == Digit)
        {
            fer++;
        }
    }
    return fer;
 }

void myprint(int Number)
{

    for (int i = 0; i < 10; i++)
    {
         short FreDigit = 0;
         FreDigit = myfrecount( Number, i);

        if (FreDigit > 0)
        {
          cout << "Digits " << i << "frecount is " << FreDigit << endl;

        }
        
    }
    
  
}

int main()
{
    int Number = ReadNumber("enter to number");
    myprint(Number);
    return 0;
}
 