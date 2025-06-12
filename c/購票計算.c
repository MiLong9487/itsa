#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a;
    scanf("%d", &a);
    printf("NT10=%d\nNT5=%d\nNT1=%d\n", a / 10, (a % 10) / 5, a % 5);
	return 0;
}