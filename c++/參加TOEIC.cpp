#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(void)
{
	int num, score, ms = 0, sum = 0, c1 = 0, c2 = 0;
	cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> score;
        ms = max(ms, score);
        sum += score;
        c1 += score >= 900;
        c2 += score > 600 && score <= 700;
    }
	cout << ms << endl << c1 << endl << c2 << endl << fixed << setprecision(1) << (double)sum / num << endl;
	return 0;
}
