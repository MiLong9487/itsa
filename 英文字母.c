#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char a;
    scanf("%c", &a);
    printf("%s", a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' ? "母音\n" : "子音\n");
	return 0;
}