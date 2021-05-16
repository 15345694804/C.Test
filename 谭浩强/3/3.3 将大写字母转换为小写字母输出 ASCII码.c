#include <stdio.h>

int main(){
    char c1,c2; //使用字符型定义变量

    c1 = 'A';   //!定义字符型变量时，值要用‘’
    c2 = c1 + 32;

    printf("%c\n",c2);  //%c占位符 代表字符型
    printf("%d\n",c2);  //%d占位符 代表整型

    return 0;
}