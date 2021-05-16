#include <stdio.h>
/*
 *  浮点型 float double
 */
int main(){
    float a = 3.14f;
    double b = 3.14;    //不以f结尾的是double类型

    printf("%f\n",a);
    printf("%lf\n",b);

    //浮点型数据 存储在内存中的格式分为 符号位 制数位 小数位
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));

    //占位符%p 表示输出一个变量对应的内存地址编号(无符号十六进制数)
    printf("%p\n",&a);

    return 0;
}