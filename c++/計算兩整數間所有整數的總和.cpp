#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b, c;
    cin >> a;
    for (; a > 0; a--) {
        cin >> b >> c;
        cout << (int)((b + c) * (abs(b - c) + 1) / 2) << endl;
    }
	return 0;
}