#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void RandomArray(int arr[100], int& arrLength)
{

    cout << "\nenter to element?\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}


void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
}

short PriArry(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;
    }
    return -1;
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


int main()
{
    srand((unsigned)time(NULL));
    int arr[100] , arrLength;

    RandomArray(arr, arrLength);
    
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

int Number = ReadNumber("\nenter to number\n");
cout << "\nNumber you are looking for is:\n";

    short NumberPosition = PriArry(Number, arr, arrLength);

    if (NumberPosition == -1)  
    cout << "The number is not found is:-( " << Number << endl; 

    else
    {
        cout << "The number found at position: " << NumberPosition << endl;
        cout << "The number found its order : " << NumberPosition + 1 << endl;
    }


    return 0;
}