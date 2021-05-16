#include <stdio.h>
/*
 *  %d:输出一个有符号的10进制int类型
 *  %o:输出8进制的int类型
 *  %x:输出16进制的int类型，字母以小写输出
 *  %X:输出16进制的int类型，字母以大写输出
 *  %u:输出一个1-禁止的无符号数
 */
int main(void){
    //数据类型 标识符=值
    //无符号 unsigned 有符号 signed(可以审略)

    //signed int a = -10;

    unsigned int a = 10;//使用无符号修饰符，只能定义为正值

    printf("%u\n",a);

    return 0;
}