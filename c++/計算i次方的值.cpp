#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a < 31) {
            cout << (1 << a) << endl;
        } else {
            cout << "Value of more than 31\n";
        }
    }
	return 0;
}