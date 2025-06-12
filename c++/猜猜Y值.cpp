#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b;
    cin >> a;
    for (; a > 0; a--) {
        cin >> b;
        cout << (b >= 50 && b <= 70 ? b : 100) << endl;
    }
    return 0;
}