#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b;
    scanf("%d", &a);
    for (; a > 0; a--) {
        scanf("%d", &b);
        printf("%s\n", b < 60 ? "不及格" : b < 70 ? "丙等" : b < 80 ? "乙等" : b < 90 ? "甲等" : "優等");
    }
    return 0;
}