#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b;
    cin >> a >> b;
    while ((a %= b) != 0) a ^= b ^= a ^= b;
    cout << b << endl;
	return 0;
}