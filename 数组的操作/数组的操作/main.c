#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[] = {1, 2, 3, 4};
    // 遍历
    for (int i = 0, len = sizeof(arr) / sizeof(arr[0]); i < len; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    int arr1[] = {1, 2}, arr2[5], arr3[10]; // 其中如果arr1[]一开始没有给定大小的话就要在后面立刻赋初值不然就报错
    printf("%lu, %lu, %lu\n", sizeof(arr1), sizeof(arr2), sizeof(arr3));
    //    arr1[2] = 3; // 报错下标越界
    char *str = "joe";
    printf("%c\n", str[0]);
    return 0;
}
