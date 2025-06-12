#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double a;
    scanf("%lf", &a);
    printf("%d\n", (int)ceil(a / 0.238));
	return 0;
}