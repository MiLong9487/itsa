#include <iostream>
using namespace std;

int main(void)
{
    int num, ans = 0;
    cin >> num;
	for (int i = num; i > 0; i /= 10) {
        int tmp = i % 10;
        ans += tmp * tmp * tmp;
    }
    if (ans == num) {
        cout << "YES\n";
    } else {
	    cout << "NO\n";
	}
	return 0;
}
