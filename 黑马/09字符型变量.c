#include <stdio.h>
/*
 *  字符型变量char
 *      每个char变量都有一个对应的ASCII值
 */
int main(){
    //字符型变量
    char ch1 = 'a';
    char ch2 = 'A';

    //打印字符串变量
    printf("%c\n",ch1);
    printf("%c\n",ch2);

    //打印字母a对应十进制数
    printf("a = %d\n",ch1);
    printf("A = %d\n",ch2);

    printf("a - A = %d\n",ch1-ch2);

    //打印字母a所占内存大小
    printf("字符型大小：%d\n",sizeof(ch1));

    return 0;
}