#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a;
    char b[3][100] = {"Person", "Fairy", "Dwarf"};
    scanf("%d", &a);
    printf("%s\n", b[a - 1]);
    return 0;
}