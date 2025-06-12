#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        cout << a << ' ' << a * a << ' ' << a * a * a << '\n';
    }
	return 0;
}