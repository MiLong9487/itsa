#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a;
    scanf("%d", &a);
    for (int i = 2; i <= (int)sqrt(a); i++) {
        if (a % i == 0) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
	return 0;
}