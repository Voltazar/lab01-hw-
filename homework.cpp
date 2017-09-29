#include <iostream>
#include <math.h>

using namespace std;
int main()
{   // var 16 num 6
    cout << "enter the three-digit number x ";
    int x = 0;
    cin >> x;
    int y = x/10;
    cout << "number = " << (x % 10) * 100 + y << endl << endl;
    // var 16 num 19
    x = 456;
    cout << x << endl;
    cout << "crossed out 2 digit" << endl;
    y = (x % 100)/10;
    cout << "number=" << y * 100 + (x/100) * 10 + x % 10;
    return 0;
}
