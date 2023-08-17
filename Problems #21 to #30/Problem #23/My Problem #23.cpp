#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int RandomNumber(int From, int To) {

	int runNum = rand() % (To - From + 1) + From;
	return runNum;

}
void ReadArry(int Arry[100], int& length)
{
    cout << "enter Arry : ";
    cin >> length;

    cout << "\nEnter array elements: ";
    for (int i = 0; i < length; i++)
    {
        Arry[i] = RandomNumber(1,100);
		cout << Arry[i]<<" ";
    }  
}


int main()
{
   	srand((unsigned)time(NULL));

	
	int Arry[100], length = 0;

	ReadArry(Arry, length);
	return 0;
}