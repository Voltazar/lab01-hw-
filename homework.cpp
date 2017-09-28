#include <iostream>
#include <math.h>

using namespace std;

int main()
{   // var 16 num 6
    cout << "enter the three-digit number x ";
    int x;
    cin >> x;
    div_t y = div(x, 10);
    cout << "number = " << (x % 10) * 100 + y.quot << endl << endl;
    // var 16 num 19
    x = 456;
    cout << x << endl;
    cout << "crossed out 2 digit" << endl;
    y = div((x % 100), 10);
    div_t k = div(x, 100);
    cout << "number=" << y.quot * 100 + k.quot * 10 + x % 10;
    return 0;
}
