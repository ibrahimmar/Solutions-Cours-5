#include <iostream>
using namespace std;

int ReadNegativeNumber()
{
	int Number = 0;
	do
	{
		cout << "Enter To Negative Number? \n";
		cin >> Number;
	} while (Number > 0);
	return Number;
}

int MyABS(int Number)
{
	int Minus = -1;

	int Abs = 0;
	Abs = Number * Minus;

	return Abs;
}

int main()
{
	int Number = ReadNegativeNumber();
	 cout << "My abs Result : " << MyABS(Number) << endl;
	 cout << "C++ abs Result: " << abs(Number) << endl;
}