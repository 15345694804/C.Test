#include <stdio.h>
/*
 *  算术运算符
 */
int main1(){
    int a = 10;
    int b = 7;
    float c = 5.5f;

    printf("%f\n",a/c); //浮点型与整型运算，整型会自动转换为浮点型
    printf("%d\n",a%b); // %取余运算符

    return 0;
}

int main2(){
    int a = 10;

    a = a++;    //先计算表达式的结果，再自增
    printf("%d\n",a);

    a = ++a;    //先自增，再计算表达式的结果
    printf("%d\n",a);

    return 0;
}

int main(){
    int a = 10;

    a += 5;
    printf("%d\n",a);

    a %= 5;
    printf("%d\n",a);

    a *= 5;
    printf("%d\n",a);

    return 0;
}