#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    a = c * 60 + d - a * 60 - b;
    b = a <= 120 ? a / 30 * 30 : 120;
    a -= 120;
    if (a > 0) {
        b += a <= 120 ? a / 30 * 40 : 160;
        a -= 120;
    }
    if (a > 0) {
        b += a / 30 * 60;
    }
    printf("%d\n", b);
	return 0;
}