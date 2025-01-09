#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n", a, b, a + b);
    printf("%d*%d=%d\n", a, b, a * b);
    printf("%d-%d=%d\n", a, b, a - b);
    printf("%d/%d=%d...%d\n", a, b, a < 0 && b > 0 ? (int)(a / b)  - (a % b != 0): (int)(a / b), a % b >= 0 ? a % b : b + a % b);
	return 0;
}