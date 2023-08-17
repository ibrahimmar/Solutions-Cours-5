#include <iostream>
#include <cstdio>

using namespace std;

int ReadNumber(int From, int To)
{

    int randnum = rand() % (To - From + 1) + From;
    return randnum;
}

int main()
{
    srand((unsigned)time(NULL));

    cout << ReadNumber(1, 10) << endl;
    cout << ReadNumber(1, 10) << endl;
    cout << ReadNumber(1, 10) << endl;

    return 0;
}