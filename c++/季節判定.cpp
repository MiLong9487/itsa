#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a;
    string b[5] = {"Winter", "Spring", "Summer", "Autumn", "Winter"};
    cin >> a;
    cout << b[a / 3] << endl;
    return 0;
}