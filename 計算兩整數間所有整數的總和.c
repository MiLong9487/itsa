#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b, c;
    scanf("%d", &a);
    for (; a > 0; a--) {
        scanf("%d %d", &b, &c);
        printf("%d\n", (int)((b + c) * (abs(b - c) + 1) / 2));
    }
	return 0;
}