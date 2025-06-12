#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a;
    char b[5][100] = {"Winter", "Spring", "Summer", "Autumn", "Winter"};
    scanf("%d", &a);
    printf("%s\n", b[a / 3]);
    return 0;
}