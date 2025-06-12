#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(max(a, b), c) << endl;
	return 0;
}