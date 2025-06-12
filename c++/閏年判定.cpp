#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a;
    cin >> a;
    cout << ((a % 4 || !(a % 100)) && a % 400 ? "Common Year" : "Bissextile Year") << endl;
    return 0;
}