#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a;
    scanf("%d", &a);
    printf("%d\n", a < 10 ? a * 100 : a < 30 ? a * 90 : a < 100 ? a * 80 : a * 70);
	return 0;
}