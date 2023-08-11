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
    cout << "\n";
    for (int i = 1; i <= Number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(65 + i -1);
        }
        cout << endl;
    }
    
}
int main()
{
    MyprintNumber(ReadPositiveNumber("Enter to Number?"));
    return 0;
}