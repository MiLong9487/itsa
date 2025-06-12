#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b, c = -101;
    scanf("%d", &a);
    for (; a > 0; a--) {
        scanf("%d", &b);
        c = b > c ? b : c;
    }
    printf("%d\n", c);
    return 0;
}