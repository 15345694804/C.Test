#include <stdio.h>
/*
 *  整形大小和取值范围:sizeof关键字
 *      sizeof不是函数，所以不需要包含任何头文件，功能是计算一个数据类型的大小，单位为字节
 */
int main(void){
    //整型变量
    int a;
    //短整型变量
    short b = 20;
    //长整型变量
    long c = 30;
    //长长整型变量
    long long d = 40;

    printf("%d\n",a);
    printf("%hd\n",b);
    printf("%ld\n",c);
    printf("%lld\n",d);

    //sizeof 计算数据类型在内存中占的字节（BYTE）大小
    //sizeof (数据类型) sizeof(变量名) sizeof 变量名
    unsigned int len = sizeof(int);

    printf("%d\n",len);

    printf("整型:%d\n",sizeof(a));
    printf("短整型:%d\n",sizeof(b));
    printf("长整型:%d\n",sizeof(c));
    printf("长长整型:%d\n",sizeof(d));

    return 0;
}