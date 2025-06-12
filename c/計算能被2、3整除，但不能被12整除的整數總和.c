#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b = 0, c = 5;
    scanf("%d", &a);
    while (++c <= a) {
        b += !(c % 6) && c % 12 ? c : 0;
    }
    printf("%d\n", b);
	return 0;
}