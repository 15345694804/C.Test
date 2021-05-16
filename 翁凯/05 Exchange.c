#include <stdio.h>
/*
    交换a和b的值
 */
int main(){
    int a = 5;
    int b = 6;
    int t;  //定义一个空变量，来保存a的值

    t = a;  //t=a = 5
    a = b;  //a=b = 6
    b = t;  //b=t = 5

    printf("a=%d,b=%d",a,b);

    return 0;
}
