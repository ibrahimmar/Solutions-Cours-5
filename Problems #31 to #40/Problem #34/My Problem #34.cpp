#include <iostream>
#include <string>
#include <cstdio>
#include <ctime>
#include <cmath>

using namespace std;

int RandomNumber(int From, int To)
{
    int runNum = rand() % (To - From + 1) + From;
    return runNum;
}
void RandomArray(int arr[100], int& length)
{

    cout << "\nenter to element?\n";
    cin >> length;

    for (int i = 0; i < length; i++)
       {
        arr[i] = RandomNumber(1, 100);
    }
}
void PrintArry(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
    cout << arr[i] << " ";
}

int FoundArray(int Number, int arr[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == Number)
            return  i;
    }
    return -1;
}
int ReadNumber()
{
    int Number =0;
    cout << "\nenter your number\n ";
    cin >> Number;
    return Number;
}

int main()
{
    srand((unsigned)time(NULL));

int arr[100], length;

RandomArray(arr,  length);

cout << "\nArray 1 elements:\n";
PrintArry(arr, length);

int Number = ReadNumber();
cout << "\nNumber you are looking for is:\n";

int PositionNumber = FoundArray(Number, arr, length);

if (PositionNumber == -1)
    cout << "The number is not found is:-( " << Number << endl; 

else
{
        cout << "The number found at position: " << PositionNumber << endl;
        cout << "The number found its order : " << PositionNumber + 1 << endl;
}


return 0;
}