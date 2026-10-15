#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);   // 控制台输出用 UTF-8
    int a;
    int *arr;         
    int b;
    double sum = 0.0;
    double average;

    // 获取想输入的整数个数
    printf("请输入要输入的整数个数: ");
    if (scanf("%d", &a) != 1 || a <= 0) {
        printf("输入无效！\n");
        return 1;// 异常退出
    }

    arr = (int *)malloc(a * sizeof(int));
    if (arr == NULL) {                   
        printf("内存申请失败！\n");
        return 1;
    }

    printf("请输入 %d 个整数:\n", a);
    for (b = 0; b < a; b++) {
        scanf("%d", &arr[b]);
    }

    for (b = 0; b < a; b++) {
        sum += arr[b];
    }

     average = sum / a;
    printf("总和 = %.2f, 平均值 = %.2f\n", sum, average);

    free(arr);
    arr = NULL;      

    return 0;
}