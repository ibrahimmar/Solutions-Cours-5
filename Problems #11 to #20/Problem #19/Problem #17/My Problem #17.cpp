#include <iostream>
#include <string>

using namespace std;
string readnumber()
{
    string Number ;
    cout << "Please enter a 3-Letter Password (all capital)?\n";
    cin >> Number;
    return Number;
}

bool PrintWordsFromAAAToZZZ(string Number)
{

    int counter = 0;
    cout << "\n";

    string Word = " ";

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                counter++;
                Word = Word + char(i);   
                Word = Word + char(j);
                Word = Word + char(k);

                cout << counter << Word << endl;

                    if (Word == Number)
                    {
                        cout << "\n password" << Word <<endl;
                        cout << counter;
                        return true;
                    }
                    

                Word = " ";
            }
        }
    }  
    return false;
}

int main()
{
    PrintWordsFromAAAToZZZ(readnumber());
}