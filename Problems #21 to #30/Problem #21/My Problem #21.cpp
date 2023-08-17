#include <iostream>
#include <cstdio>

using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number ;
    } while (Number < 0);
    return Number;
}

string RandomNumber(int From, int To)
{
    string Text = "";
    for (int i = 1; i <= 4; i++)
    {
        Text += rand() % (To - From + 1) + From;

    }
    
    return Text;
}

void PrintKeyWin11(int Number)
{
    for (int  i = 1; i <= Number; i++)
    {
        cout << "Key [" << i << "] : ";
        for (int j = 1; j <= 3; j++)
        {
            cout << RandomNumber(65, 90) << " - ";
        }
        cout << RandomNumber(65, 90) << endl;;

    }
    
}
int main()
{

    srand((unsigned)time(NULL));

    PrintKeyWin11(ReadNumber("Enter to Number :"));
}