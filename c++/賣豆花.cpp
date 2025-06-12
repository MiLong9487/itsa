#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a;
    cin >> a;
    cout << "百元 " << a / 100 << endl;
    a %= 100;
    cout << "十元 " << a / 10 << endl;
    cout << "壹元 " << a % 10 << endl;
    return 0;
}