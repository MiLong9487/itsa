#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a;
    cin >> a;
    for (int i = 1; i <= a; i += 2) {
        cout << i;
        if (i + 2 <= a) {
            cout << " ";
        }
    }
    cout << "\n";
    return 0;
}