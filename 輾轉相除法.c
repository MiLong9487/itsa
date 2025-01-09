#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b;
    scanf("%d %d", &a, &b);
    while ((a %= b) != 0) a ^= b ^= a ^= b;
    printf("%d\n", b);
	return 0;
}