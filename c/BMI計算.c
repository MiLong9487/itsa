#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.2lf\n", round(a / b / b * 1000000) / 100);
	return 0;
}
