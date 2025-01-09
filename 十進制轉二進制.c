#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b = 128;
    scanf("%d", &a);
    for (; b > 0; b >>= 1) printf("%d", (a & b) != 0);
    printf("\n");
	return 0;
}