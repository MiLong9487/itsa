#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a;
    scanf("%d", &a);
    printf("%s\n", (a % 4 || !(a % 100)) && a % 400 ? "Common Year" : "Bissextile Year");
    return 0;
}