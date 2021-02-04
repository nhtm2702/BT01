#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x,y;
    cin >> x1 >> y1 >> x2 >> y2;
    x=abs(x1-x2);
    y=abs(y1-y2);
    cout << double(sqrt(x*x+y*y));
    return 0;
}

