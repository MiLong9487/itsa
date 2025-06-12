#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    long long n, a, b;
    cin >> n;
    for (; n > 0; n--) {
        cin >> a;
        b = 1;
        if (a == 0) {
            cout << "0\n";
            continue;
        }
        for (; a > 0; a--) {
            b *= a;
        }
        cout << b << endl;
    }
    return 0;
}