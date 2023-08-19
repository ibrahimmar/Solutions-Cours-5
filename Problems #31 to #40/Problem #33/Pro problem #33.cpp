#include <iostream>
#include <string>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;

 enum enCharType { smallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char GetRandomCharacter(enCharType enCharType)
{

    switch (enCharType)
    {
        case enCharType::smallLetter:
            return char(RandomNumber(97, 122));
        case enCharType::CapitalLetter:
            return char(RandomNumber(65, 90)); 
        case enCharType::SpecialCharacter:
            return char(RandomNumber(33, 47));
        case enCharType::Digit:
            return char(RandomNumber(48, 57));
    }
}
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

string GenerateWord(enCharType CharType, short Length)
{

    string Word;
    for (int i = 1; i <= Length; i++)
    {
        Word += GetRandomCharacter(CharType);
    }
    return Word;
}

string GenerateKey()
{
    string Key;
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key += GenerateWord(enCharType::CapitalLetter, 4);

    return Key;
}
void PrintStringArray(string arr[100], int arrlength)
{

    cout << "\nArray elements:\n\n";
    for (int i = 0; i < arrlength; i++)
    {
        cout << "Array [" << i << "] ";
        cout << arr[i] << "\n";
    }
    cout << "\n";
}
void ArrayKey(string arr[100], int arrlenght)
{
    for (int i = 0; i < arrlenght; i++)
    {
        arr[i] = GenerateKey();
    }   
}
int main()
{
    srand((unsigned)time(NULL));
string arr[100];
int arrLength = 0;

arrLength = (ReadNumber("Enter the number of keys: "));

ArrayKey(arr, arrLength);

PrintStringArray(arr, arrLength);

return 0;
}
