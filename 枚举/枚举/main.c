#include <stdio.h>

enum COLORS {RED, BLUE, PINK, NumOfColors};
int main(int argc, const char * argv[]) {
    printf("%d\n", RED);
    int color;
    char *list[] = {"red", "blue", "pink"};
    scanf("%d", &color);
    printf("你喜欢的颜色是：%s\n", list[color]);
    return 0;
}
