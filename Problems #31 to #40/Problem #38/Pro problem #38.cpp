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

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    //its a new element so we need to add the length by 1
    arrLength++;
    arr[arrLength - 1] = Number;
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLenght, int& arrLenght2)
{
    for (int i = 0; i < arrLenght; i++)

        if (arrSource[i] % 2 != 0 )
        {
            AddArrayElement(arrSource[i], arrDestination, arrLenght2);

        }
}



int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0, arrLenght2 = 0;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arrLenght2);

    cout << "\nArray Elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements after copy\n";
    PrintArray(arr2, arrLenght2);

    return 0;
}