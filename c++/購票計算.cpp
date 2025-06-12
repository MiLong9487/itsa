#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a;
    cin >> a;
    cout << "NT10=" << a / 10 << "\nNT5=" << (a % 10) / 5 << "\nNT1=" << a % 5 << endl;
	return 0;
}