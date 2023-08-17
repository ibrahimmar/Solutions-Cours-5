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

int SumArrayOfNumber(int arr[100], int arrLength)
{
    int Sum = 0;
    for (int i = 0; i < arrLength; i++)
    {
        Sum = Sum + arr[i];
    }
    return Sum;
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);
    
    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nSum of Numbers is : ";
    cout << SumArrayOfNumber(arr, arrLength) << endl;
  
    return 0;
}
