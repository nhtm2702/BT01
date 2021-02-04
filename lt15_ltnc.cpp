#include <iostream>
#include <string>
using namespace std;
int main()
{
    string f0="a",f1="b",f2;
    int i=2;
    cout << f0 << endl;
    cout << f1 << endl;
    do
    {
        f2=f0+f1;
        cout << f2 << endl;
        f0=f1;
        f1=f2;
        i++;
    }
    while (i<=10);
}
