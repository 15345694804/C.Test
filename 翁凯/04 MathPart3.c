#include <stdio.h>
/*
    输入两个时间，计算两个时间的时间差
 */
int main() {
    int hour1,minute1;
    int hour2,minute2;

    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);

    int t1 = hour1 * 60 + minute1;  //将小时*60转换为分钟单位
    int t2 = hour2 * 60 + minute2;

    int t = t2 - t1;

    if(t2 > t1) {
        printf("时间差是%d时%d分。", t / 60, t % 60);  //t%60:取余数
    }else{
        printf("时间差是%d时%d分。",t / 60 * -1,t % 60 * -1);  //如果t2比t1大，会显示-d时间-d分钟，乘以-1使其保持正整数状态
    }

    return 0;
}