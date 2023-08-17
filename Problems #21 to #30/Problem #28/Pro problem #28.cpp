#include <iostream>
#include <string>
#include <cstdio>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To) {

    int runNum = rand() % (To - From + 1) + From;
    return runNum;

}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "enter of elments?\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
}

void CopyArray(int arrSource[100], int arrDestination[100], int arrLenght)
{  
    for (int i = 0; i < arrLenght; i++)
    arrDestination[i] = arrSource[i];    
}
  

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);
    
    int arr2[100];
    CopyArray(arr, arr2, arrLength);

    cout << "\nArray Elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements after copy\n";
    PrintArray(arr2, arrLength);

    return 0;
}