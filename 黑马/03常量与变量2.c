#include <stdio.h>
//定义常量方法一：宏定义常量
//      格式:#define 常量名 值
#define PI 3.141592

/*
 * 常量与变量
 *      需求：圆的面积和周长
 */

int main(void){
    //    //定义常量方法二：const关键字
    //          格式:const 数据类型 常量名 = 值
    //    const float PI = 3.141592;

    /*
    标识符:
        1.不能使用系统关键字
        2.允许使用字母、数字、下划线
        3.不允许数组开头
       *标识符区分大小写,见名知意，驼峰命名
     */
    float r = 3.f;

    float s = PI * r * r;
    float l = 2 * PI * r;

    //占位符%.2f 表示输出保留2位小数(四舍五入)
    printf("圆的面积: %.2f \n",s);
    printf("圆的周长: %.2f",l);

    return 0;
}