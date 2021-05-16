#include <stdio.h>
/*
 * printf关键字
 *      需求:输出字符串HelloWorld
 */
int main(){
    /*
        {}函数体 代码体 程序体
        printf是stdio.h系统提供的函数 表示在标准输入设备上打印字符串
        ""称为字符串：一条语句的结束
     */
    printf("Hello World!");

    //return 如果出现在其他函数中表示函数结束 如果出现在main函数中表示程序结束
    //0表示函数的返回值 要和函数返回值类型对应
    return 0;
}