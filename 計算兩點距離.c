#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    printf("%.2lf\n", round(sqrt(pow(a - c, 2) + pow(b - d, 2)) * 100) / 100);
	return 0;
}