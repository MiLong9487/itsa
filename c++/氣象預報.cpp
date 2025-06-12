#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b;
    cin >> a;
    for (; a > 0; a--) {
        cin >> b;
        cout << ((b > 37 && b < 70) || b > 150 ? "避免外出" : "可依需要待在戶外") << endl;
    }
    return 0;
}