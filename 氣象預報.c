#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b;
    scanf("%d", &a);
    for (; a > 0; a--) {
        scanf("%d", &b);
        printf("%s\n", (b > 37 && b < 70) || b > 150 ? "避免外出" : "可依需要待在戶外");
    }
    return 0;
}