#include <iostream>
#include <cstdio>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
int main()
{
    srand((unsigned)time(NULL));

    cout << (char) (RandomNumber(97, 122)) << endl;
    cout << (char) (RandomNumber(65, 90)) << endl;
    cout << (char) (RandomNumber(33, 47)) << endl;
    cout << (char) (RandomNumber(48, 57)) << endl;

    return 0;
}