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
void RandomArray(int arr[100], int arr2[100], int& length)
{

    cout << "\nenter to element?\n";
    cin >> length;

    for (int i = 0; i < length; i++)
       {
        arr[i] = RandomNumber(1, 100);
        arr2[i] = RandomNumber(1, 100);
    }
}
void PrintArry(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
    cout << arr[i] << " ";
}

void SumArray(int arr[100], int arr2[100], int length)
{
    int Sum[100];

    for (int i = 0; i < length; i++)
    {
        Sum[i] = arr[i] + arr2[i];
    }
      cout << "\nSum of Arrays:\n";
    PrintArry(Sum, length);
}

int main()
{
    srand((unsigned)time(NULL));

int arr[100], arr2[100], length;

RandomArray(arr, arr2, length);

cout << "\nArray 1 elements:\n";
PrintArry(arr, length);

cout << "\nArray 2 elements:\n";
PrintArry(arr2, length);


SumArray(arr, arr2, length);

return 0;
}