#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b = 128;
    cin >> a;
    for (; b > 0; b >>= 1) cout << ((a & b) != 0);
    cout << "\n";
	return 0;
}