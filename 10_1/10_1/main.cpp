#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void CreateTXT(char* fname)
{
    ofstream fout(fname);
    char ch;
    string s;
    do
    {
        cin.get();
        cin.sync();
        cout << "enter line: "; getline(cin,s);
        fout << s << endl;
        cout << "continue? (y/n): "; cin >> ch;
    }
    while (ch == 'y' || ch == 'Y'); cout << endl;
}
void PrintTXT(char* fname)
{
    ifstream fin(fname); string s;
    while ( getline(fin, s) )
    {
        cout << s << endl;
    }
    cout << endl;
}
int ProcessTXT1(char* fname)
{
    ifstream fin(fname);
    string s;
    int k=0;
    while ( getline(fin, s) )
    {
        for (unsigned i=0; i<s.length(); i++)
            if (s[i] == 'w' && s[i+1] == 'h' && s[i+2] == 'i' && s[i+3] == 'l' && s[i+4] == 'e')
                k++;
        }
        return k;
}
int main()
{
    char fname[100];
    cout << "enter file name: "; cin >> fname;
    CreateTXT(fname);
    PrintTXT(fname);
    cout << "kilkist while = " << ProcessTXT1(fname) << endl;
    return 0;
}
