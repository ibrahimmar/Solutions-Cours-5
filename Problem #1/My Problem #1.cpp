#include <iostream>
#include <string>
using namespace std;

void Mulipliaction()
{
    cout << "\n\n\t\t\t\t\t Multipliaction Table From 1 to 10 \t\t\t\n" << endl;
    cout << "\t\t\t1 \t2 \t3 \t4 \t5 \t6 \t7 \t8 \t9 \t10 \t" << endl;
    cout << "____________________________________________________________________________________________________" << endl;
}

void MyScheduler()
{
   int num = 10;
    for(int i = 1; i <= num; i++)
    {
        cout <<  "\t "<< i << "\t|" <<  "\t";
        for (int j = 1; j <=num; j++)
        {
            cout << i * j <<"\t" ;
        } 
        cout << endl;
    }
}

int main()
{
 
Mulipliaction();
MyScheduler(); 
}