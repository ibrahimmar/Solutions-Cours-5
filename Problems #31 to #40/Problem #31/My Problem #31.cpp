#include <iostream>
#include <string>
#include <cstdio>
#include <ctime>
#include <cmath>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

void Swep(int& A, int& B)
{
    int Temp;

    Temp = A;
    A = B;
    B = Temp;
}
void Arraystreat(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
        arr[i] = i + 1; 
}

int RandomNumber(int From, int To)
{
    int runNum = rand() % (To - From + 1) + From;
    return runNum;
}

void SwopOfArry(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        Swep(arr[RandomNumber(1, length) - 1], arr[RandomNumber(1, length) - 1]);
    }
}

void PrintArry(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
    cout << arr[i] << " ";
}


int main()
{
    srand((unsigned)time(NULL));

int arr[100]; 

int length = ReadPositiveNumber("enter of element: ");

Arraystreat( arr,  length);

cout << "\nArray elements Before shuffle\n";
PrintArry(arr, length);

SwopOfArry(arr, length);

cout << "\nArray elements after shuffle\n";
PrintArry(arr, length);


return 0;
}