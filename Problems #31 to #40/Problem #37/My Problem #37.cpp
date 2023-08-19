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

void AddArray(int Num, int arr[100], int& arrLength )
{
    arrLength++;
    arr[arrLength - 1] = Num;
}

void CopyArrayAddArray(int arrSource[100], int arrDestination[100], int arrLenght, int& arrLength2)
{  
    for (int i = 0; i < arrLenght; i++)
    
      AddArray( arrSource[i], arrDestination, arrLength2);    
}
  

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0,  arrLength2 = 0;

    FillArrayWithRandomNumbers(arr, arrLength);
    
    int arr2[100];
    CopyArrayAddArray(arr, arr2, arrLength, arrLength2);

    cout << "\nArray Elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements after copy\n";
    PrintArray(arr2, arrLength2);

    return 0;
}