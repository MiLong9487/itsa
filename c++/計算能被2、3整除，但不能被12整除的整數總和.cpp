#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b = 0, c = 5;
    cin >> a;
    while (++c <= a) {
        b += !(c % 6) && c % 12 ? c : 0;
    }
    cout << b << endl;
	return 0;
}