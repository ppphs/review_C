#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    float val1, val2, val3, val4;
    
    val1 = 1.6;
    val2 = 1.2;
    val3 = 2.8;
    val4 = 2.3;
    
    // ceil向上取整
    printf("ceil()向上取整结果：\n");
    printf ("value1 = %.1lf\n", ceil(val1));
    printf ("value2 = %.1lf\n", ceil(val2));
    printf ("value3 = %.1lf\n", ceil(val3));
    printf ("value4 = %.1lf\n", ceil(val4));
    
    // floor向下取整
    printf("floor()向下取整结果：\n");
    printf("Value1 = %.1lf\n", floor(val1));
    printf("Value2 = %.1lf\n", floor(val2));
    printf("Value3 = %.1lf\n", floor(val3));
    printf("Value4 = %.1lf\n", floor(val4));
    
    // fabs取绝对值
    printf("fabs()取绝对值结果：\n");
    int a, b;
    a = 1234;
    b = -344;
    
    printf("%d 的绝对值是 %lf\n", a, fabs(a));
    printf("%d 的绝对值是 %lf\n", b, fabs(b));
    
    // pow(a, b) a的b次幂
    printf("值 8.0 ^ 3 = %lf\n", pow(8.0, 3));
    printf("值 3.05 ^ 1.98 = %lf\n", pow(3.05, 1.98));
    
    // 分解一个浮点数
    double x, fractpart, intpart;
    x = 8.123456;
    fractpart = modf(x, &intpart);
    printf("整数部分 = %lf\n", intpart);
    printf("小数部分 = %lf \n", fractpart);
    return 0;
}
