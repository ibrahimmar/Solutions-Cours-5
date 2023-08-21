#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enOddEven { Odd = 1, Even = 2 };

int RandomNumber(int From, int To) {
    int runNum = rand() % (To - From + 1) + From;
    return runNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "Enter the number of elements: ";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
}

enOddEven CheckOddEven(int num)
{
    if (num % 2 != 0)
        return enOddEven::Odd;
    else
        return enOddEven::Even;
}

int OddCount(int arr[100], int arrLength)
{
    int Counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (CheckOddEven(arr[i]) == enOddEven::Odd)
        {
            Counter++;
        }
    }
    return Counter;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nOdd Numbers count is: ";
    cout << OddCount(arr, arrLength) << endl;

    return 0;
}