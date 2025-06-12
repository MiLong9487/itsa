#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a;
    scanf("%d", &a);
    printf("百元 %d\n", a / 100);
    a %= 100;
    printf("十元 %d\n", a / 10);
    printf("壹元 %d\n", a % 10);
    return 0;
}