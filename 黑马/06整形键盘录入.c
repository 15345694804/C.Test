#include <stdio.h>
/*
 *  整形键盘录入 scanf函数
 */
int main(void){
    int a;

    //通过键盘输入赋值
    //  &运算符 表示取地址运算符
    printf("请输入a的值:");
    scanf("%d",&a);

    printf("%d\n",a);

    return 0;
}