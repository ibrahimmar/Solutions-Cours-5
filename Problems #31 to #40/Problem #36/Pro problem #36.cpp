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

void AddArray(int Num, int arr[100], int& arrLength )
{
    arrLength++;
    arr[arrLength - 1] = Num;
}

void PutInArray(int arr[100], int& arrLength)
{
    bool AddMore = true;

    do
    {
        AddArray(ReadPositiveNum("enter to number"), arr, arrLength);
        cout << "Do you want to add more numbers? [0]:No,[1]:yes? ";
        cin >> AddMore;
        
    } while (AddMore);
    
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
}




int main()
{
    int arr[100], arrLength = 0;

    PutInArray(arr, arrLength);
    cout << "\nArray Length: " << arrLength << endl;
    cout << "Array elements: ";
    PrintArray(arr, arrLength);

    return 0;
}