#include <stdio.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(65001);   // 控制台输出用 UTF-8

    double a = 0.0, b = 0.0, result = 0.0;
    char op = '\0';

    printf("请输入算式:");
    if(scanf("%lf %c %lf",&a,&op,&b)!=3){
        printf("输入错误!\n");
        return 1;
    }
    switch(op){
    case'+':
    result=a+b;
    printf("%lf+%lf=%lf\n",a,b,result);
    break;

    case'-':
    result=a-b;
    printf("%lf-%lf=%lf\n",a,b,result);
    break;

    case'*':
    result=a*b;
    printf("%lf*%lf=%lf\n",a,b,result);
    break;

    case'/':
    if(b==0){
        printf("除数不能为0\n");
    }
    else{
    result=a/b;
    printf("%lf/%lf=%lf\n",a,b,result);
    }
    break;
    
    default:
    printf("错误\n");
    break;
    }
    return 0;
    }