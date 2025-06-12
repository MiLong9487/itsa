#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a = c * 60 + d - a * 60 - b;
    b = a <= 120 ? a / 30 * 30 : 120;
    a -= 120;
    if (a > 0) {
        b += a <= 120 ? a / 30 * 40 : 160;
        a -= 120;
    }
    if (a > 0) {
        b += a / 30 * 60;
    }
    cout << b << endl;
	return 0;
}