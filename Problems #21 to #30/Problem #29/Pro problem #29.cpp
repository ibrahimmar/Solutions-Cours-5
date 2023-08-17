#include <iostream>
#include <string>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

enPrimNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return enPrimNotPrime::NotPrime;
    }
    return enPrimNotPrime::Prime;
}

int RandomNumber(int From, int To)
{
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

void CopyOnlyPrimeNumber(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Length)
{
    int counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
        {
            arrDestination[counter] = arrSource[i];
            counter++;
        }
    }
    arr2Length = counter;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100], arr2Length = 0;
    CopyOnlyPrimeNumber(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nPrime Numbers in Array:\n";
    PrintArray(arr2, arr2Length);

    return 0;
}