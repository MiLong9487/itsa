#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double a, b, c;
    scanf("%lf %lf", &a, &b);
    c = a <= 60 ? a * b : 60 * b;
    a -= 60;
    if (a > 0) {
        c += a <= 60 ? a * b * 1.33 : 60 * b * 1.33;
        a -= 60;
    }
    if (a > 0) {
        c += a * b * 1.66;
    }
    printf("%.1lf\n", c);
	return 0;
}