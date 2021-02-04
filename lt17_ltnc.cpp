#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if ((x % 400 == 0) || ((x % 4 == 0) && ( x % 100 != 0))) cout << "Nam nhuan";
    else cout << "Khong phai nam nhuan";
    return 0;
}
