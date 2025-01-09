#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double a;
    scanf("%lf", &a);
    printf("%.1lf\n", round(a * 18 + 320) / 10);
	return 0;
}