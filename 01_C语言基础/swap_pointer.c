#include <stdio.h>
#include <windows.h>

void swap(int* p1,int* p2){
        int temp=*p1;
        *p1=*p2;
        *p2=temp;
    }


int main(){
    SetConsoleOutputCP(65001);   // 控制台输出用 UTF-8
    
    int a=5;
    int b=19;
    int* p1=&a;
    int* p2=&b;
    printf("调用前%d, %d\n", a, b);
    swap(p1,p2);
    printf("调用后%d, %d\n", a, b);
    return 0;
}


