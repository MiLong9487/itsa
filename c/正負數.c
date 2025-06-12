#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a;
    scanf("%d", &a);
    printf("%s", a > 0 ? "正數\n" : a == 0 ? "0\n" : "負數\n");
	return 0;
}