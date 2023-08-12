#include <iostream>
#include <string>

using namespace std;

string ReadName()
{
    string Name;
    cout << "enter to Name?" << endl;
    getline (cin, Name);
    return Name;
}

string MyEncrypt(string Name, short Key)
{
    for (int i = 0; i <= Name.length(); i++)
    {
        Name[i] = char((int)Name[i] + Key);
    }
    return Name;
}
string MyDncrypt(string Name, short Key)
{
    for (int i = 0; i <= Name.length(); i++)
    {
        Name[i] = char((int)Name[i] - Key);
    }
    return Name;
}
int main()
{
    const short Key = 2;

    string Name = ReadName();
    string Encrypt = MyEncrypt(Name, Key);
    string Dncrypt = MyDncrypt(Encrypt, Key);

    cout << "\n Name Before Encrypt : " << Name ;
    cout << "\n After Encrypt : " << Encrypt ;
    cout << "\n After Dncrypt : " << Dncrypt ;

    return 0;
}