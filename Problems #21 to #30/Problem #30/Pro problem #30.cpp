#include <iostream>
#include <string>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;

nt ReadPositiveNum(string txt)
{
    cout << endl;
    int Num = 0;
    do
    {
        cout << txt << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
};

int RandomNumber(int From, int To)
{
    int runNum = rand() % (To - From + 1) + From;
    return runNum;
}

void FillArrayWithRandomNumbers(int arr[100], int arr2[100], int& arrLength)
{
    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
}

void SumArrays(int arr[100], int arr2[100], int arrSum[100], int arrLength)
{
   

    for (int i = 0; i < arrLength; i++) {
        arrSum[i] = arr[i] + arr2[i];
    }

    
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arr2[100], arrSum[100];
    int arrLength = ReadPositiveNum("How many Elements");
    FillArrayWithRandomNumbers(arr, arrLength);

    FillArrayWithRandomNumbers( arr2, arrLength);

    SumArrays(arr, arr2, arrSum, arrLength);
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements:\n";
    PrintArray(arr2, arrLength);

    
    cout << "\nSum of Arrays:\n";
    PrintArray(arrSum, arrLength);

    return 0;
}