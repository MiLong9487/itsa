#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b = 256;
    char c[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    scanf("%d", &a);
    while (!(a / b)) b >>= 4;
    for (; b > 0; b >>= 4) printf("%c", c[a / b]), a %= b;
    printf("\n");
	return 0;
}