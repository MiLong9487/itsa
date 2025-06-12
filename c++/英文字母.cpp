#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    char a;
    cin >> a;
    cout << (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' ? "母音\n" : "子音\n");
	return 0;
}