#include <iostream>
using namespace std;

int main(void)
{
	int num, bmi;
    cin >> num;
	for (; num > 0; num--) {
        cin >> bmi;
        cout << (bmi < 19 ? "體重過輕\n" : bmi < 24 ? "正常\n" : bmi < 28 ? "體重過重\n" : "肥胖\n");
    }
	
	return 0;
}