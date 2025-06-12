#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b;
    cin >> a;
    for (; a > 0; a--) {
        cin >> b;
        cout << (b < 60 ? "不及格" : b < 70 ? "丙等" : b < 80 ? "乙等" : b < 90 ? "甲等" : "優等") << endl;
    }
    return 0;
}