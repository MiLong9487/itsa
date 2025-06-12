#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    double a, b;
    cin >> a >> b;
    cout << "Triangle area:" << fixed << setprecision(1) << a * b / 2 << endl;
	return 0;
}