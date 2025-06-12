#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a;
    cin >> a;
    cout << (a > 0 ? "正數\n" : a == 0 ? "0\n" : "負數\n");
	return 0;
}