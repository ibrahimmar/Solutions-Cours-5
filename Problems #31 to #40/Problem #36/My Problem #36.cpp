#include <iostream>
#include<cstdlib>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

int ReadNumber()
{
	int Number = 0;
	cout << "\nPlease enter to Number?\n";
	cin >> Number;
	return Number;
}
void AddArrayElement(int Number, int Array[100], int& length)
{
	length++;
	Array[length - 1] = Number;
}

void InPutArrayUser(int Array[100], int& length)
{
	bool AddMore = true;

	do
	{
		AddArrayElement(ReadNumber(), Array, length);
		cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
		cin >> AddMore;
	} while (AddMore);
}

void PrintArray(int Array[100], int length)
{
	for (int i = 0; i < length; i++)
		cout << Array[i] << " ";
}




int main()
{
	int Array[100], length = 0;
	InPutArrayUser(Array, length);

	cout << "\nArray Length: " << length << endl;
	cout << "Array elements: ";
	PrintArray(Array, length);

	return 0;
}