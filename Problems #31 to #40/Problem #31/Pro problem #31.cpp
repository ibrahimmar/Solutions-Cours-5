#include <iostream>
#include <string>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;

int ReadPositiveNum(string txt)
{
    cout << endl;
    int Num = 0;
    do
    {
        cout << txt << endl;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

void Swap(int& A, int& B)
{
    int Temp;

    Temp = A;
    B = A;
    B = Temp;
}

void FillArrayWithRandomNumbers(int arr[100],  int arrLength)
{
    for (int i = 0; i < arrLength; i++) {
        arr[i] = i +1;
    }
}
int RandomNumber(int From, int To)
{
    int runNum = rand() % (To - From + 1) + From;
    return runNum;
}

void ShuffleArry(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
	}
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
}




int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = ReadPositiveNum("How many Elements");
    FillArrayWithRandomNumbers(arr, arrLength);



	cout << "\nArray elements Before shuffle\n";
    PrintArray(arr, arrLength);

	ShuffleArry(arr, arrLength);


	cout << "\nArray elements after shuffle\n";
    PrintArray(arr, arrLength);

    return 0;
}