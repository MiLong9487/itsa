#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n, a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a < 31) {
            printf("%d\n", 1 << a);
        } else {
            printf("%s\n", "Value of more than 31");
        }
    }
	return 0;
}