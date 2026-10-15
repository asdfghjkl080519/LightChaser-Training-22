#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);   // 控制台输出用 UTF-8
    int a;
    int sum=0;
    for(a=1;a<=100;a=a+2){
        sum=sum+a;
        }
        printf("1到100的奇数和=%d\n",sum);
        return 0;
}