#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int RandomNumber(int From, int To) {

	int runNum = rand() % (To - From + 1) + From;
	return runNum;

}
void RandomArray(int arr[100], int& length)
{
    cout << "enter to element: ";
    cin >> length;

    for (int i = 0; i < length; i++)
    arr[i] = RandomNumber(1 , 100);
}
void PrintArray(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";
}
int MaxNumber(int arr[100], int length)
{
    int Max = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] > Max)
            Max = arr[i];
    }
    return Max;
}
int main()
{

    srand((unsigned)time(NULL));

    int arr[100], length;

    RandomArray(arr, length);
    cout << "Array Elements: ";
    PrintArray(arr, length);

    cout << "\nMax Number is: " << MaxNumber(arr, length) << endl;

}