#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n, a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        printf("%d %d %d\n", a, a * a, a * a * a);
    }
	return 0;
}