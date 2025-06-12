#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i += 2) {
        printf("%d", i);
        if (i + 2 <= a) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}