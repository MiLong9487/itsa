#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    double a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a);
        printf("%.1lf\n", round(a * a * 10) / 10);
    }
	return 0;
}