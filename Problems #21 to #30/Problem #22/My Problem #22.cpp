#include <iostream>
#include <string>
#include <cstdio>

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
void ReadArry(int Arry[100], int& length)
{
    cout << "enter Arry?" << endl;
    cin >> length;

    cout << "\nEnter array elements: \n";
    for (int i = 0; i < length; i++)
    {
        cout << "\nElement [" << i + 1 << "] : ";
        cin >> Arry[i] ;
    }  
    cout << endl;
}
void PruntArry(int Arry[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << Arry[i] << " ";
    }
    cout << "\n";
}
int RepeatArry(int Number, int Arry[100], int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (Number == Arry[i])
        {
            count ++;
        }
     } 
       return count;   
}

int main()
{
    int Arry[100], length, checknumber;

    ReadArry(Arry, length);
    checknumber = ReadNumber("\nenter to number?");

    cout << "\nOriginal arry: ";
    PruntArry(Arry, length);
    cout << "\n number check: " << checknumber ;
    cout << " is repeated ";
    cout << RepeatArry(checknumber, Arry, length) << " times(s)";
}