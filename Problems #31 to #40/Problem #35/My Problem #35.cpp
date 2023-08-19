#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

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

bool PriArry(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return true;
    }
    return false;
}


int main()
{
    srand((unsigned)time(NULL));
    int arr[100] , arrLength;

    RandomArray(arr, arrLength);
    
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    int Number = ReadNumber("\nPlease enter a number to search for?\n");
    cout << "Number you are looking for is: " << Number << endl; 

    short NumberPosition = PriArry(Number, arr, arrLength);

    if (NumberPosition == true)  
        cout << "\nthe number is  found :-)\n";

    else
    {
        cout << "\nthe number is ont found :-(\n";

    }


    return 0;
}