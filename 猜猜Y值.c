#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b;
    scanf("%d", &a);
    for (; a > 0; a--) {
        scanf("%d", &b);
        printf("%d\n", b >= 50 && b <= 70 ? b : 100);
    }
    return 0;
}