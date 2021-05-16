#include <stdio.h>
/*
 *  逻辑运算符
 */
int main(){
    //!所有非0的值都是真值
    int a = 10;
    int b = 10;
    int c = 20;

    printf("!a = %d\n",!a);  //！逻辑非: 取反
    printf("a&&b = %d\n",a&&b);  //&& 逻辑与:都为真才真，有假则为假
    printf("!a&&b = %d\n",!a&&b);   //! 单目运算符优先级高于双目运算符
    printf("a||b = %d\n",a||b);    //|| 逻辑或:都为假才假，有真则为真
    printf("!a||!b  = %d\n",!a||!b);

    return 0;
}