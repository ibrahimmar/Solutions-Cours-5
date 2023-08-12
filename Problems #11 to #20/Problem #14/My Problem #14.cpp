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

void MyprintNumber(int Number)
{
    for (int i = Number; i >= 1; i--)
    {
        
        for (int j = 1; j <= i; j++)
        {
    
            cout << (char) ('A' + i - 1);
        }
        cout << endl;
    }
}

int main()
{
    MyprintNumber(ReadPositiveNumber("Enter to Number?"));
    return 0;
}