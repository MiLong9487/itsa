#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a;
    string b[3] = {"Person", "Fairy", "Dwarf"};
    cin >> a;
    cout << b[a - 1] << endl;
    return 0;
}