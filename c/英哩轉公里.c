#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double a;
    scanf("%lf", &a);
    printf("km=%.1lf\n", round(a * 16) / 10);
	return 0;
}