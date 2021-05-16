#include <stdio.h>
/*
 *  %d:输出一个有符号的10进制int类型
 *  %o:输出8进制的int类型
 *  %x:输出16进制的int类型，字母以小写输出
 *  %X:输出16进制的int类型，字母以大写输出
 *  %u:输出一个1-禁止的无符号数
 *      *在计算机定义中，不可以直接定义二进制
 */
int main(void){
    //定义一个十进制数
    int a = 10;
    printf("%d\n",a);
    printf("%o\n",a);
    printf("%x\n",a);

    printf("———————————————————\n");

    //定义一个八进制数，以0开头
    int b = 012;
    printf("%d\n",b);
    printf("%o\n",b);
    printf("%x\n",b);

    printf("———————————————————\n");

    //定义一个十六进制数，以0x开头
    int c = 0x1a;
    printf("%d\n",c);
    printf("%o\n",c);
    printf("%x\n",c);

    return 0;
}