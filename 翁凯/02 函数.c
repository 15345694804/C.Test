#include <stdio.h>
#include <math.h>

//函数声明
void sum(int begin,int end); //函数原型(有分号结尾)

int main() {
    //调用函数
    sum(1,10);
    sum(20,30);
    sum(30,50);

    return 0;
}

//函数定义
void sum(int begin,int end){ //函数头(无分号结尾)
    int i;
    int sum = 0;
    for(i = begin;i <= end;i++){
        sum+=i;
    }
    printf("%d~%d的和是%d\n",begin,end,sum);
}
