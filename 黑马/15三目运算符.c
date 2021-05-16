#include <stdio.h>
/*
 *  三目运算符
 */
int main(){
    int a = 10;
    int b = 30;
    int c = 20;
    int max;

    max = a>b ? a : b;

    printf("最大值为: %d",max);

    printf("最大值为: %d",a>b?( a>c?a:c ) : ( b>c?b:c ));

    return 0;
}