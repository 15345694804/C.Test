#include <stdio.h>
/*
    输入英尺和英寸，将其转换为米为单位的数
 */
int main() {
    /*
        double
            双精度浮点数
            输出是用f：printf("%f...")
            输入使用lf:printf("%lf...")
     */
    double foot;
    double inch;

    printf("请分别输入身高的英尺和英寸:");
    scanf("%lf %lf",&foot,&inch);

    printf("身高是%f米.\n",(
            (foot + inch /12)*0.3048)
    );
}
