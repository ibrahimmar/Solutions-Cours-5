#include <iostream>
#include <string>
#include <cstdio>
#include <ctime>
#include <cmath>

using namespace std;

enum enPrimeNotPrime{ Prime = 1, NotPrime = 2};

enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);

    for (int i = 2; i < M; i++)
    {
        if (Number % i == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;
}

int RandomNumber(int From, int To)
{
    int runNum = rand() % (To - From + 1) + From;
    return runNum;
}
void RandamArray(int arr[100], int& length)
{
    cout << "enter of elements?\n";
    cin >> length;

    for (int i = 0; i < length; i++)
        arr[i] = RandomNumber(1, 100);
}
void CopyArrayPrime(int arrtwo[100], int arrthree[100], int length, int& length2)
{
    int counter = 0;

    for (int i = 0; i < length; i++)
    {
        if (CheckPrime(arrtwo[i]) == enPrimeNotPrime::Prime)
        {
            arrthree[counter] = arrtwo[i];
            counter++;
        }
    }
    length2 = counter;
}

void PrintArray(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], length;

    RandamArray(arr, length);

    int arr2[100], length2 = 0;
    CopyArrayPrime(arr, arr2, length, length2);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, length);

    cout << "\nPrime Numbers in Array:\n";
    PrintArray(arr2, length2);    
}