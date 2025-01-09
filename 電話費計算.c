#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double a;
    scanf("%lf", &a);
    printf("%.1lf\n", a <= 800 ? a * 0.9 : a < 1500 ? a * 0.81 : a * 0.711);
	return 0;
}