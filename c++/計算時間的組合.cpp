#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a;
    cin >> a;
    cout << a / 86400 << " days\n";
    a %= 86400;
    cout << a / 3600 << " hours\n";
    a %= 3600;
    cout << a / 60 << " minutes\n";
    cout << a % 60 << " seconds\n";
	return 0;
}