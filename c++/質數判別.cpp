#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a;
    cin >> a;
    for (int i = 2; i <= a-1; i++) {
        if (a % i == 0) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
	return 0;
}