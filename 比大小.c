#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a = (a > b ? a : b)) > c ? a : c);
	return 0;
}