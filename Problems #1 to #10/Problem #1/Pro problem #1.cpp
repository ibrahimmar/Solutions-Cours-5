#include <iostream>
#include <string>

using namespace std;

void MyHeader()
{
    cout << "\n\n\t\t\t Multipliaction Table From 1 to 10\n\n";

    for (int i = 1; i <= 10; i++)
    {
        cout <<"\t" << i ;
      
    }
 cout << "\n___________________________________________________________________________________\n"; 
}

string ColumSperator(int i)
{
    if (i < 10)
    return "  |";
    else
    return " |";
}
void PrintMultiplicationTable()
{
    MyHeader();

    for (int i = 1; i <= 10; i++)
    {

        cout << " " << i << ColumSperator(i) << "\t";
        for ( int j= 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

int main()
{
    PrintMultiplicationTable();

    return 0;
}