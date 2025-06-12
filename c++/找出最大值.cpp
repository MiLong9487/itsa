#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b, c = -101;
    cin >> a;
    for (; a > 0; a--) {
        cin >> b;
        c = max(b, c);
    }
    cout << c << endl;
    return 0;
}