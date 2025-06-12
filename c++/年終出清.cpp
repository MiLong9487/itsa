#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a;
    cin >> a;
    cout << (a < 10 ? a * 100 : a < 30 ? a * 90 : a < 100 ? a * 80 : a * 70) << endl;
	return 0;
}