#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b = 256;
    char c[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    cin >> a;
    while (!(a / b)) b >>= 4;
    for (; b > 0; b >>= 4) cout << ((char)c[a / b]), a %= b;
    cout << "\n";
	return 0;
}